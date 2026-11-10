/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ec658; name: FUN_001ec658
 */


undefined8 FUN_001ec658(long *param_1,uint param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = *param_1;
  bVar4 = (param_2 & 1) == 0;
  lVar1 = lVar7 + 0x1268;
  if (bVar4) {
    lVar1 = lVar7 + 0x1248;
  }
  lVar2 = 0x1620;
  if (bVar4) {
    lVar2 = 0x1628;
  }
  if (*param_3 != '\0') {
    do {
      iVar5 = thunk_FUN_001f8bec("Digest",param_3,6);
      if (iVar5 == 0) {
        iVar5 = thunk_FUN_001f8bec("Basic",param_3,5);
        if (iVar5 == 0) {
          iVar5 = thunk_FUN_001f8bec("Bearer",param_3,6);
          if (iVar5 == 0) goto LAB_001ec7c0;
          *(ulong *)(lVar7 + lVar2) = *(ulong *)(lVar7 + lVar2) | 0x40;
          uVar6 = *(ulong *)(lVar1 + 0x10) | 0x40;
          bVar4 = *(long *)(lVar1 + 8) == 0x40;
        }
        else {
          *(ulong *)(lVar7 + lVar2) = *(ulong *)(lVar7 + lVar2) | 1;
          uVar6 = *(ulong *)(lVar1 + 0x10) | 1;
          bVar4 = *(long *)(lVar1 + 8) == 1;
        }
        *(ulong *)(lVar1 + 0x10) = uVar6;
        if (bVar4) {
          *(undefined8 *)(lVar1 + 0x10) = 0;
LAB_001ec79c:
          FUN_001f3934(lVar7,"Authentication problem. Ignoring this.\n");
          *(ushort *)(lVar7 + 0x15a4) = *(ushort *)(lVar7 + 0x15a4) | 0x20;
        }
      }
      else if ((*(byte *)(lVar1 + 0x10) >> 1 & 1) == 0) {
        uVar6 = FUN_002019c0();
        if ((uVar6 & 1) != 0) {
          *(ulong *)(lVar7 + lVar2) = *(ulong *)(lVar7 + lVar2) | 2;
          *(ulong *)(lVar1 + 0x10) = *(ulong *)(lVar1 + 0x10) | 2;
          iVar5 = FUN_001e319c(param_1,param_2 & 1,param_3);
          if (iVar5 != 0) goto LAB_001ec79c;
        }
      }
      else {
        FUN_001f3934(lVar7,"Ignoring duplicate digest auth header.\n");
      }
LAB_001ec7c0:
      for (; (cVar3 = *param_3, cVar3 != '\0' && (cVar3 != ',')); param_3 = param_3 + 1) {
      }
      if (cVar3 == ',') {
        param_3 = param_3 + 1;
      }
      cVar3 = *param_3;
      while( true ) {
        if (cVar3 == '\0') {
          return 0;
        }
        iVar5 = FUN_001e33f4(cVar3);
        if (iVar5 == 0) break;
        param_3 = param_3 + 1;
        cVar3 = *param_3;
      }
    } while (*param_3 != '\0');
  }
  return 0;
}


