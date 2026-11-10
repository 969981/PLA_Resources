/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f8794; name: FUN_007f8794
 */


void FUN_007f8794(long param_1)

{
  char cVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_60 [32];
  
  puVar2 = PTR_DAT_04377550;
  uVar3 = (ulong)*(ushort *)(param_1 + 0x114e);
  if (*(ushort *)(param_1 + 0x114e) != 0) {
    plVar4 = *(long **)(param_1 + 0x88);
    uVar6 = 0;
    lVar5 = *plVar4;
    cVar1 = *(char *)(lVar5 + 10);
    while( true ) {
      if (cVar1 == '\x01') {
        FUN_007f0d08(auStack_60,lVar5 + 0x10);
        lVar5 = *(long *)puVar2;
        if ((lVar5 != 0) && (*(char *)(param_1 + 0x1150) != '\0')) {
          FUN_0082afc8(lVar5,auStack_60);
          FUN_0082abd8(lVar5,auStack_60,0xffffffff);
        }
        plVar4 = *(long **)(param_1 + 0x88);
        *(undefined1 *)(plVar4[uVar6] + 10) = 0;
        uVar3 = (ulong)*(ushort *)(param_1 + 0x114e);
      }
      uVar6 = uVar6 + 1;
      if (uVar3 <= uVar6) break;
      lVar5 = plVar4[uVar6];
      cVar1 = *(char *)(lVar5 + 10);
    }
  }
  return;
}


