/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010b74a4; name: FUN_010b74a4
 */


void FUN_010b74a4(long param_1,ushort *param_2,long *param_3,long param_4)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  long lVar5;
  ushort *puVar6;
  long lVar7;
  
  lVar5 = *(long *)(param_1 + 0x378);
  if (*(char *)(lVar5 + 0x7c) != '\0') {
    **(undefined2 **)(lVar5 + 0x58) = 0;
    *(undefined2 *)(lVar5 + 0x7a) = 0;
  }
  if (param_4 - 1U < 0x201) {
    puVar6 = param_2;
    lVar5 = param_4;
    bVar4 = false;
    do {
      uVar2 = *puVar6;
      lVar7 = *(long *)(param_1 + 0x378);
      bVar1 = (bool)(~bVar4 & 1);
      if (9 < uVar2 - 0x11) {
        bVar1 = bVar4;
      }
      if (*(char *)(lVar7 + 0x7c) != '\0') {
        uVar3 = *(ushort *)(lVar7 + 0x7a);
        if (uVar3 + 1 < (uint)*(ushort *)(lVar7 + 0x78)) {
          *(ushort *)(lVar7 + 0x7a) = uVar3 + 1;
          *(ushort *)(*(long *)(lVar7 + 0x58) + (ulong)uVar3 * 2) = uVar2;
          *(undefined2 *)(*(long *)(lVar7 + 0x58) + (ulong)*(ushort *)(lVar7 + 0x7a) * 2) = 0;
        }
        else if ((uVar2 == 0) && (uVar3 + 1 == (uint)*(ushort *)(lVar7 + 0x78))) {
          *(ushort *)(lVar7 + 0x7a) = uVar3 + 1;
          *(undefined2 *)(*(long *)(lVar7 + 0x58) + (ulong)uVar3 * 2) = 0;
        }
      }
      lVar5 = lVar5 + -1;
      puVar6 = puVar6 + 1;
      bVar4 = bVar1;
    } while (lVar5 != 0);
    if (bVar1) {
      lVar5 = *(long *)(param_1 + 0x378);
      if (*(char *)(lVar5 + 0x7c) != '\0') {
        uVar2 = *(ushort *)(lVar5 + 0x7a);
        if (uVar2 + 1 < (uint)*(ushort *)(lVar5 + 0x78)) {
          *(ushort *)(lVar5 + 0x7a) = uVar2 + 1;
          *(undefined2 *)(*(long *)(lVar5 + 0x58) + (ulong)uVar2 * 2) = 0x1b;
          *(undefined2 *)(*(long *)(lVar5 + 0x58) + (ulong)*(ushort *)(lVar5 + 0x7a) * 2) = 0;
          lVar5 = *(long *)(param_1 + 0x378);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x010b75cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0x130))(param_3,*(undefined8 *)(lVar5 + 0x58),0,(int)param_4 + 1);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x010b756c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x130))(param_3,param_2,0);
  return;
}


