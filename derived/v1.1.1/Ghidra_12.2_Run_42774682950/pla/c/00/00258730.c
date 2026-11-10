/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00258730; name: FUN_00258730
 */


void FUN_00258730(long *param_1,float *param_2,float *param_3,undefined8 param_4)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_78 [2];
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  
  if ((*(byte *)(param_1 + 0xb) & 1) != 0) {
    uVar5 = FUN_00244c1c();
    if ((uVar5 & 1) == 0) {
      local_64 = 3.4028235e+38;
      local_68 = -3.4028235e+38;
      if (((*PTR_DAT_04372ab0 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04372ab0), iVar4 != 0)) {
        if (((*PTR_DAT_043729e8 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar4 != 0)) {
          *(undefined8 *)PTR_DAT_043729f0 = 0;
          __cxa_guard_release(PTR_DAT_043729e8);
        }
        *(undefined **)PTR_DAT_04372ab8 = PTR_DAT_043729f0;
        __cxa_guard_release(PTR_DAT_04372ab0);
      }
      for (plVar6 = (long *)(**(code **)(*param_1 + 0x10))(param_1); plVar6 != (long *)0x0;
          plVar6 = (long *)*plVar6) {
        if (plVar6 == (long *)PTR_DAT_04372ab8) {
          if (param_1 != (long *)0x0) {
            fVar11 = 0.0;
            fVar10 = 0.0;
            fVar8 = *(float *)(param_1 + 10);
            fVar9 = *(float *)((long)param_1 + 0x54);
            bVar1 = *(byte *)((long)param_1 + 0x5b) & 3;
            if (bVar1 != 1) {
              if (bVar1 == 2) {
                fVar10 = -fVar8;
              }
              else {
                fVar10 = fVar8 * -0.5;
              }
            }
            bVar1 = *(byte *)((long)param_1 + 0x5b) >> 2 & 3;
            fVar12 = 0.0;
            if ((bVar1 != 1) && (fVar12 = fVar9, bVar1 != 2)) {
              fVar12 = fVar9 * 0.5;
            }
            FUN_00258c40(fVar8,fVar9,fVar10,fVar12,local_78,param_1,param_4);
            (**(code **)(*param_1 + 0x140))(&local_60,param_1);
            fVar8 = local_58 - local_60;
            (**(code **)(*param_1 + 0x140))(&local_60,param_1);
            fVar10 = 0.0;
            bVar1 = *(byte *)((long)param_1 + 0x5b) & 3;
            if (bVar1 != 1) {
              if (bVar1 == 2) {
                fVar10 = -fVar8;
              }
              else {
                fVar10 = fVar8 * -0.5;
              }
            }
            bVar1 = *(byte *)((long)param_1 + 0x5b) >> 2 & 3;
            if ((bVar1 != 1) && (fVar11 = local_5c - local_54, bVar1 != 2)) {
              fVar11 = fVar11 * 0.5;
            }
            FUN_00258c40(fVar8,local_5c - local_54,fVar10,fVar11,&local_60,param_1,param_4);
            bVar1 = *(byte *)((long)param_1 + 0x116) & 3;
            if (bVar1 == 1) {
              local_58 = (local_58 - local_60) + local_78[0];
            }
            else {
              local_78[0] = local_60;
              if (bVar1 == 2) {
                local_64 = local_70 - (local_58 - local_60);
                local_68 = local_70;
                goto LAB_00258a80;
              }
            }
            local_68 = local_58;
            local_64 = local_78[0];
            goto LAB_00258a80;
          }
          break;
        }
      }
      if (((*PTR_DAT_04372aa0 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04372aa0), iVar4 != 0)) {
        if (((*PTR_DAT_043729e8 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar4 != 0)) {
          *(undefined8 *)PTR_DAT_043729f0 = 0;
          __cxa_guard_release(PTR_DAT_043729e8);
        }
        *(undefined **)PTR_DAT_04372aa8 = PTR_DAT_043729f0;
        __cxa_guard_release(PTR_DAT_04372aa0);
      }
      for (plVar6 = (long *)(**(code **)(*param_1 + 0x10))(param_1); plVar6 != (long *)0x0;
          plVar6 = (long *)*plVar6) {
        if (plVar6 == (long *)PTR_DAT_04372aa8) {
          bVar1 = *PTR_DAT_04372ac0;
          plVar6 = param_1;
          goto joined_r0x00258860;
        }
      }
      plVar6 = (long *)0x0;
      bVar1 = *PTR_DAT_04372ac0;
joined_r0x00258860:
      if ((bVar1 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(PTR_DAT_04372ac0);
        puVar2 = PTR_DAT_043729f0;
        if (iVar4 != 0) {
          if (((*PTR_DAT_043729e8 & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar4 != 0)) {
            *(undefined8 *)puVar2 = 0;
            __cxa_guard_release(PTR_DAT_043729e8);
          }
          *(undefined **)PTR_DAT_04372ac8 = puVar2;
          __cxa_guard_release(PTR_DAT_04372ac0);
        }
      }
      for (plVar7 = (long *)(**(code **)(*param_1 + 0x10))(param_1); plVar7 != (long *)0x0;
          plVar7 = (long *)*plVar7) {
        if (plVar7 == (long *)PTR_DAT_04372ac8) {
          bVar3 = param_1 != (long *)0x0;
          goto joined_r0x002588ac;
        }
      }
      bVar3 = false;
joined_r0x002588ac:
      if ((plVar6 != (long *)0x0) || (bVar3)) {
        fVar10 = 0.0;
        fVar8 = *(float *)(param_1 + 10);
        fVar9 = *(float *)((long)param_1 + 0x54);
        bVar1 = *(byte *)((long)param_1 + 0x5b) & 3;
        if (bVar1 != 1) {
          if (bVar1 == 2) {
            fVar10 = -fVar8;
          }
          else {
            fVar10 = fVar8 * -0.5;
          }
        }
        bVar1 = *(byte *)((long)param_1 + 0x5b) >> 2 & 3;
        fVar11 = 0.0;
        if ((bVar1 != 1) && (fVar11 = fVar9, bVar1 != 2)) {
          fVar11 = fVar9 * 0.5;
        }
        FUN_00258c40(fVar8,fVar9,fVar10,fVar11,&local_60,param_1,param_4);
        local_68 = local_58;
        local_64 = local_60;
      }
LAB_00258a80:
      fVar10 = local_64;
      if (*param_2 <= local_64) {
        fVar10 = *param_2;
      }
      *param_2 = fVar10;
      fVar10 = local_68;
      if (local_68 <= *param_3) {
        fVar10 = *param_3;
      }
      *param_3 = fVar10;
    }
    for (plVar6 = (long *)param_1[5]; plVar6 != param_1 + 4; plVar6 = (long *)plVar6[1]) {
      FUN_00258730(plVar6 + -1,param_2,param_3,param_4);
    }
  }
  return;
}


