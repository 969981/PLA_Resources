/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03051388; name: FUN_03051388
 */


void FUN_03051388(long *param_1,ulong param_2,byte param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  
  iVar2 = *(int *)(param_1[0x71] +
                   (long)*(int *)(*(long *)(*param_1 + 0x38) + (param_2 & 0xffffff) * 0xc0 + 0x80) *
                   0x20 + 0x10);
  if (iVar2 != -1) {
    lVar7 = *(long *)(param_1[0x73] + (long)iVar2 * 8);
    *(byte *)(lVar7 + 0x24) = *(byte *)(lVar7 + 0x24) | param_3 & 1;
    if (*(char *)(lVar7 + 0x25) == '\0') {
      uVar6 = *(uint *)((long)param_1 + 0x33c);
      iVar5 = (int)param_1[0x67];
      uVar1 = iVar5 + 1;
      if (iVar5 < (int)(uVar6 & 0x3fffffff)) {
        lVar4 = param_1[0x66];
      }
      else {
        lVar4 = param_1[0x66];
        if (0x3ffffffe < iVar5) {
          FUN_032bd0a8(uVar1);
          uVar6 = *(uint *)((long)param_1 + 0x33c);
        }
        uVar6 = (uVar6 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar6) {
          uVar6 = 0x3fffffff;
        }
        uVar3 = uVar1;
        if ((int)uVar1 <= (int)uVar6) {
          uVar3 = uVar6;
        }
        lVar4 = FUN_032bd1d4(PTR_PTR_0434a080,uVar3,4,lVar4,iVar5);
        iVar5 = (int)param_1[0x67];
        param_1[0x66] = lVar4;
      }
      *(int *)(lVar4 + (long)iVar5 * 4) = iVar2;
      *(uint *)(param_1 + 0x67) = uVar1;
      *(undefined1 *)(lVar7 + 0x25) = 1;
    }
  }
  return;
}


