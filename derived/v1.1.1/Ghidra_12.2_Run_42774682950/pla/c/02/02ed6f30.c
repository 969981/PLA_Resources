/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed6f30; name: FUN_02ed6f30
 */


void FUN_02ed6f30(ulong param_1,long *param_2,uint param_3)

{
  long *plVar1;
  float *pfVar2;
  float *pfVar3;
  ulong uVar4;
  float fVar5;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  
  fVar5 = (float)param_1;
  if ((((param_3 < 0x1b) && ((1 << (ulong)(param_3 & 0x1f) & 0x7f8007fU) != 0)) || (param_3 == 0x48)
      ) || (param_3 - 0x3c < 10)) {
    local_60 = (ulong)local_60._4_4_ << 0x20;
    pfVar2 = (float *)param_2[0x13];
    pfVar3 = pfVar2;
    if (pfVar2 != (float *)0x0) {
      uVar4 = 0;
      pfVar3 = (float *)((long)pfVar2 + ((ulong)(*(byte *)pfVar2 + 4) & 0x1fc));
      do {
        if ((uint)*(byte *)((long)pfVar2 + uVar4 + 1) == (param_3 & 0xff)) goto LAB_02ed6fbc;
        uVar4 = uVar4 + 1;
        pfVar3 = pfVar3 + 1;
      } while (uVar4 < *(byte *)pfVar2);
      pfVar3 = (float *)0x0;
    }
LAB_02ed6fbc:
    pfVar2 = (float *)&local_60;
    if (pfVar3 != (float *)0x0) {
      pfVar2 = pfVar3;
    }
    if (fVar5 - *pfVar2 != 0.0) {
      local_60 = 0;
      local_50 = 0;
      local_58 = 0;
      local_48 = 0xff;
      local_40 = 0xff;
      local_38 = 0;
      (**(code **)(*param_2 + 200))
                (fVar5 - *pfVar2,param_1,param_2,*(undefined4 *)(&DAT_03a9f0d0 + (ulong)param_3 * 4)
                 ,&local_60,0);
      FUN_02ea0744(param_2 + 0x13,param_3,param_1 & 0xffffffff);
    }
  }
  else if ((param_3 & 0xfffffffe) == 0xc) {
    local_60 = (ulong)local_60._4_4_ << 0x20;
    pfVar2 = (float *)param_2[0x13];
    pfVar3 = pfVar2;
    if (pfVar2 != (float *)0x0) {
      uVar4 = 0;
      pfVar3 = (float *)((long)pfVar2 + ((ulong)(*(byte *)pfVar2 + 4) & 0x1fc));
      do {
        if ((uint)*(byte *)((long)pfVar2 + uVar4 + 1) == (param_3 & 0xff)) goto LAB_02ed70ac;
        uVar4 = uVar4 + 1;
        pfVar3 = pfVar3 + 1;
      } while (uVar4 < *(byte *)pfVar2);
      pfVar3 = (float *)0x0;
    }
LAB_02ed70ac:
    pfVar2 = (float *)&local_60;
    if (pfVar3 != (float *)0x0) {
      pfVar2 = pfVar3;
    }
    if (fVar5 - *pfVar2 != 0.0) {
      (**(code **)(*param_2 + 0x200))
                (param_2,*(undefined4 *)(&DAT_03a9f0d0 + (ulong)param_3 * 4),0,0);
LAB_02ed70f8:
      FUN_02ea0744(param_2 + 0x13,param_3,param_1 & 0xffffffff);
      return;
    }
  }
  else {
    plVar1 = param_2 + 0x13;
    if (param_3 == 0xe) {
      local_60 = (ulong)local_60._4_4_ << 0x20;
      pfVar2 = (float *)*plVar1;
      pfVar3 = pfVar2;
      if (pfVar2 != (float *)0x0) {
        uVar4 = 0;
        pfVar3 = (float *)((long)pfVar2 + ((ulong)(*(byte *)pfVar2 + 4) & 0x1fc));
        do {
          if (*(byte *)((long)pfVar2 + uVar4 + 1) == 0xe) goto LAB_02ed7160;
          uVar4 = uVar4 + 1;
          pfVar3 = pfVar3 + 1;
        } while (uVar4 < *(byte *)pfVar2);
        pfVar3 = (float *)0x0;
      }
LAB_02ed7160:
      pfVar2 = (float *)&local_60;
      if (pfVar3 != (float *)0x0) {
        pfVar2 = pfVar3;
      }
      if (fVar5 - *pfVar2 != 0.0) {
        (**(code **)(*param_2 + 0x200))(param_1,param_2,0x18,0,0);
        param_3 = 0xe;
        goto LAB_02ed70f8;
      }
    }
    else {
      local_60 = CONCAT44(local_60._4_4_,*(undefined4 *)((long)&DAT_0440a800 + (ulong)param_3 * 4));
      pfVar2 = (float *)*plVar1;
      pfVar3 = pfVar2;
      if (pfVar2 != (float *)0x0) {
        uVar4 = 0;
        pfVar3 = (float *)((long)pfVar2 + ((ulong)(*(byte *)pfVar2 + 4) & 0x1fc));
        do {
          if ((uint)*(byte *)((long)pfVar2 + uVar4 + 1) == (param_3 & 0xff)) goto LAB_02ed71fc;
          uVar4 = uVar4 + 1;
          pfVar3 = pfVar3 + 1;
        } while (uVar4 < *(byte *)pfVar2);
        pfVar3 = (float *)0x0;
      }
LAB_02ed71fc:
      pfVar2 = (float *)&local_60;
      if (pfVar3 != (float *)0x0) {
        pfVar2 = pfVar3;
      }
      if (*pfVar2 != fVar5) {
        FUN_02ea0744(plVar1,param_3,param_1 & 0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x02ed724c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_2 + 0x188))(param_2,0,0);
        return;
      }
    }
  }
  return;
}


