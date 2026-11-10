/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5712c; name: FUN_00d5712c
 */


void FUN_00d5712c(long *param_1,int param_2,int *param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  
  if (*(char *)((long)param_1 + 0x6de) == '\0') {
    uVar14 = (ulong)param_2;
    uVar12 = uVar14 ^ 1;
    if ((((int)param_1[uVar12 * 0xc + 200] != 0) &&
        (uVar4 = *(uint *)(param_1[uVar12 * 0xc + 199] + 0xb0),
        uVar4 != 0 && *(int *)((long)param_1 + uVar12 * 0x60 + 0x644) != 0)) &&
       (*(char *)((long)param_1 + 0x1621) == '\0')) {
      iVar2 = 0;
      if (param_2 != 2) {
        iVar2 = param_2;
      }
      plVar1 = param_1 + 0x30;
      lVar10 = FUN_00d2ee28(plVar1,&DAT_043ab7d8 + (long)iVar2 * 0x28);
      iVar2 = 0;
      if ((int)uVar12 != 2) {
        iVar2 = (int)uVar12;
      }
      uVar5 = *(uint *)(*(long *)(lVar10 + 0x8b0) + 0x14);
      uVar6 = *(uint *)(param_1 + uVar14 * 0xc + 200);
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar8 = uVar5 / uVar6;
      }
      lVar10 = FUN_00d2ee28(plVar1);
      iVar3 = *(int *)(*(long *)(lVar10 + 0x8b0) + 0x10);
      uVar7 = *(uint *)(param_1 + uVar12 * 0xc + 200);
      uVar11 = *(int *)((long)param_1 + uVar14 * 0x60 + 0x674) + uVar8;
      if ((int)uVar11 < 0) {
        uVar11 = 0;
      }
      else {
        iVar13 = *(int *)((long)param_1 + uVar12 * 0x60 + 0x644);
        if (iVar13 <= (int)uVar11) {
          uVar11 = iVar13 - 1;
        }
      }
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = *(uint *)(*(long *)(lVar10 + 0x8b0) + 0x14) / uVar7;
      }
      if (((uVar5 < uVar6) && ((int)uVar9 < (int)uVar11)) ||
         (((int)uVar11 < (int)uVar9 &&
          (*(int *)((long)param_1 + uVar14 * 0x60 + 0x644) - 1U == uVar8)))) {
        uVar11 = uVar9;
      }
      iVar13 = uVar11 * uVar7 + (uVar7 - 1 & *param_3 >> 0x1f);
      if (uVar4 <= iVar13 + uVar7 * iVar3) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = (uVar4 - 1) / uVar7;
        }
        iVar13 = ((uVar4 - 1) - uVar5 * uVar7) + uVar11 * uVar7;
      }
      lVar10 = FUN_00d2ee28(plVar1,&DAT_043ab7d8 + (long)iVar2 * 0x28);
      *(undefined1 *)(lVar10 + 0x9f7) = 0;
      FUN_0282ef20((float)iVar3,*(undefined8 *)(lVar10 + 0x7f8));
      FUN_02819878(lVar10,iVar13,iVar3);
      FUN_00d4ba88(param_1,uVar12 & 0xffffffff,1);
      (**(code **)(*param_1 + 0x130))(param_1,uVar12 & 0xffffffff);
      local_80 = 0xab49936982f33827;
      pcStack_78 = "PLAY_UI_COMMON_SELECT";
      local_70 = 0x15;
      local_68 = (long *)0x0;
      FUN_028354b0(&local_80);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
    }
  }
  return;
}


