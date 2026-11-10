/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032bcd28; name: FUN_032bcd28
 */


undefined8
FUN_032bcd28(long *param_1,long param_2,long param_3,long param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  int *piVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 local_58;
  
  puVar3 = PTR_PTR_0434a090;
  uVar12 = param_3 - param_2;
  uVar11 = uVar12 >> 2;
  iVar10 = (int)uVar11;
  if (0 < iVar10) {
    uVar13 = 0;
    local_58 = 0x8000000000000000;
    if (0x3fffffff < iVar10) {
      FUN_032bd0a8(uVar11 & 0xffffffff);
    }
    lVar5 = FUN_032bd1d4(puVar3,uVar11 & 0xffffffff,4,0,0,(long)&local_58 + 4,param_7,param_8,uVar13
                        );
    if ((int)local_58 != iVar10) {
      local_58 = local_58 & 0xffffffff00000000;
    }
    uVar11 = local_58;
    uVar9 = uVar12 >> 2 & 0xffffffff;
    uVar12 = uVar12 >> 2 & 1;
    if (uVar9 == 1) {
      lVar6 = 0;
      iVar10 = 0;
    }
    else {
      lVar6 = 0;
      iVar10 = 0;
      do {
        lVar7 = lVar6 * 4;
        lVar6 = lVar6 + 2;
        piVar1 = (int *)(lVar5 + lVar7);
        piVar2 = (int *)(param_2 + lVar7);
        *piVar1 = iVar10;
        iVar10 = *piVar2 + iVar10;
        piVar1[1] = iVar10;
        iVar10 = piVar2[1] + iVar10;
      } while (uVar9 - uVar12 != lVar6);
    }
    if (uVar12 != 0) {
      *(int *)(lVar5 + lVar6 * 4) = iVar10;
    }
    if (0 < (int)param_1[2]) {
      lVar7 = *param_1;
      lVar6 = 0;
      do {
        lVar8 = (long)*(int *)(lVar7 + lVar6 * 4) * 4;
        iVar10 = *(int *)(lVar5 + lVar8);
        *(int *)(lVar5 + lVar8) = iVar10 + 1;
        *(int *)(param_4 + (long)iVar10 * 4) = (int)lVar6;
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)param_1[2]);
    }
    uVar4 = local_58._4_4_;
    local_58 = (ulong)local_58._4_4_ << 0x20;
    if ((-1 < (long)uVar11) && (lVar5 != 0)) {
      (**(code **)(*(long *)puVar3 + 0x18))(puVar3,lVar5,uVar4 << 2);
    }
  }
  return 0;
}


