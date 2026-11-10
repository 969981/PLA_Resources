/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031036c4; name: FUN_031036c4
 */


void FUN_031036c4(long *param_1,ulong param_2)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long local_70;
  undefined8 local_68;
  
  puVar4 = PTR_PTR_0434a080;
  lVar8 = *(long *)(param_1[1] + (param_2 & 0xffffff) * 0x10);
  pcVar2 = (char *)(lVar8 + 0x1688);
  iVar6 = *(int *)(lVar8 + 0x15d4);
  if (*pcVar2 == '\0') {
    FUN_030fd470(lVar8,0,iVar6);
  }
  else if (0 < iVar6) {
    local_68 = 0x8000000000000000;
    if (0x3fffffff < iVar6) {
      FUN_032bd0a8(iVar6);
    }
    local_70 = FUN_032bd1d4(puVar4,iVar6,4,0,0,(long)&local_68 + 4);
    iVar6 = *(int *)(lVar8 + 0x15d8);
    if (0 < iVar6) {
      lVar10 = 0;
      iVar9 = 0;
      if (*pcVar2 != '\0') goto LAB_03103828;
LAB_03103834:
      uVar5 = local_68;
      uVar1 = (int)local_68 + 1;
      if ((int)(local_68._4_4_ & 0x3fffffff) <= (int)local_68) {
        if (0x3ffffffe < (int)local_68) {
          FUN_032bd0a8(uVar1);
        }
        uVar7 = (local_68._4_4_ & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar7) {
          uVar7 = 0x3fffffff;
        }
        uVar3 = uVar1;
        if ((int)uVar1 <= (int)uVar7) {
          uVar3 = uVar7;
        }
        local_70 = FUN_032bd1d4(puVar4,uVar3,4,local_70,uVar5 & 0xffffffff,(long)&local_68 + 4);
      }
      *(int *)(local_70 + (long)(int)local_68 * 4) = (int)lVar10;
      iVar9 = iVar9 + 1;
      local_68 = CONCAT44(local_68._4_4_,uVar1);
      if (iVar9 != *(int *)(lVar8 + 0x15d4)) {
        iVar6 = *(int *)(lVar8 + 0x15d8);
        do {
          lVar10 = lVar10 + 1;
          if (iVar6 <= lVar10) goto LAB_03103898;
          if (*pcVar2 == '\0') break;
LAB_03103828:
        } while (*(char *)(*(long *)(lVar8 + 0x1690) + lVar10) == '\0');
        goto LAB_03103834;
      }
    }
LAB_03103898:
    FUN_030fdf5c(lVar8,local_70,local_70 + (long)(int)local_68 * 4);
    uVar5 = local_68;
    uVar1 = local_68._4_4_;
    local_68 = (ulong)local_68._4_4_ << 0x20;
    if ((-1 < (long)uVar5) && (local_70 != 0)) {
      (**(code **)(*(long *)puVar4 + 0x18))(puVar4,local_70,uVar1 << 2);
    }
  }
  (**(code **)(*(long *)*param_1 + 200))((long *)*param_1,*(undefined8 *)(lVar8 + 0x148),0,0);
  FUN_03035580(*param_1 + 0x7a8,*param_1,param_2 & 0xffffffff);
  return;
}


