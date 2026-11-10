/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0134e234; name: FUN_0134e234
 */


void FUN_0134e234(long param_1,float *param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = 0x4322000000000000;
  local_38 = 0;
  uVar2 = FUN_0134e4f8(&local_38,param_2,&local_40);
  if ((uVar2 & 1) != 0) {
    fVar6 = local_38._4_4_;
    fVar5 = (float)local_38;
    goto LAB_0134e2d8;
  }
  fVar5 = *param_2 + 0.0;
  fVar6 = fVar5 + -130.0;
  if (fVar6 < -910.0) {
    fVar7 = -910.0;
LAB_0134e3b8:
    fVar7 = fVar7 - fVar6;
  }
  else {
    fVar6 = fVar5 + 130.0;
    fVar7 = 0.0;
    if (910.0 < fVar6) {
      fVar7 = 910.0;
      goto LAB_0134e3b8;
    }
  }
  fVar5 = fVar5 + fVar7;
  fVar6 = param_2[1] + -162.0 + 0.0;
  local_38 = CONCAT44(fVar6,fVar5);
LAB_0134e2d8:
  local_60 = 0xf1e8b0e6aaf33cd6;
  pcStack_58 = "pane_N_stamp_set_00";
  local_50 = 0x13;
  local_48 = (long *)0x0;
  plVar3 = (long *)FUN_0283ac34(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x148),&local_60);
  if (((*PTR_DAT_043729e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar1 != 0))
  {
    *(undefined8 *)PTR_DAT_043729f0 = 0;
    __cxa_guard_release(PTR_DAT_043729e8);
  }
  if (plVar3 != (long *)0x0) {
    for (plVar4 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3); plVar4 != (long *)0x0;
        plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)PTR_DAT_043729f0) goto LAB_0134e354;
    }
    plVar3 = (long *)0x0;
  }
LAB_0134e354:
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (plVar3 != (long *)0x0) {
    *(undefined4 *)(plVar3 + 7) = 0;
    *(float *)(plVar3 + 6) = fVar5 + -140.0;
    *(float *)((long)plVar3 + 0x34) = fVar6 + -938.0;
    *(byte *)(plVar3 + 0xb) = *(byte *)(plVar3 + 0xb) | 0x10;
  }
  return;
}


