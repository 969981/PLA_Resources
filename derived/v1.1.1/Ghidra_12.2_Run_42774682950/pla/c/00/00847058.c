/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00847058; name: FUN_00847058
 */


void FUN_00847058(void *param_1,int *param_2,long param_3,ulong *param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  uint local_58 [2];
  
  lVar4 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
  lVar9 = *(long *)(lVar4 + 0x98);
  if (lVar9 == 0) {
    memset(param_1,0,4);
    return;
  }
  iVar2 = *param_2;
  plVar5 = (long *)FUN_007ecfa4();
  lVar10 = *plVar5;
  uVar11 = *param_4;
  memset(local_58,0,4);
  lVar8 = *(long *)(lVar4 + 0x20);
  if (lVar8 == lVar4 + 0x18) {
LAB_00847160:
    memcpy(param_1,local_58,4);
    return;
  }
  lVar6 = *(long *)(lVar8 + 0x10);
  do {
    if (((lVar6 == lVar9) || (*(int *)(lVar6 + 0x3c) != 2)) ||
       (bVar1 = *(byte *)(lVar6 + 0x28), 0x17 < bVar1)) {
LAB_008470e0:
      lVar8 = *(long *)(lVar8 + 8);
    }
    else {
      uVar3 = 1 << (ulong)(bVar1 & 0x1f);
      if ((*(uint *)(param_3 + (ulong)(bVar1 >> 5) * 4) & uVar3) == 0) {
        uVar7 = *(ulong *)(lVar6 + 0x80);
        if (uVar7 < uVar11 - lVar10 * iVar2) {
          local_58[0] = local_58[0] | uVar3;
        }
      }
      else {
        uVar7 = *param_4;
        *(ulong *)(lVar6 + 0x80) = uVar7;
      }
      if (uVar7 == 0) goto LAB_008470e0;
      FUN_007ecfa4();
      lVar8 = *(long *)(lVar8 + 8);
    }
    if (lVar8 == lVar4 + 0x18) goto LAB_00847160;
    lVar6 = *(long *)(lVar8 + 0x10);
  } while( true );
}


