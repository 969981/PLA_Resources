/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed5e00; name: FUN_02ed5e00
 */


void FUN_02ed5e00(ulong param_1,long param_2,long param_3,uint param_4,int param_5,
                 undefined4 param_6,int param_7)

{
  float *pfVar1;
  undefined8 uVar2;
  float *pfVar3;
  float *pfVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  long local_90;
  undefined8 local_88;
  float local_80;
  float fStack_7c;
  int local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined2 local_6b;
  undefined8 local_68;
  
  uVar6 = (ulong)param_4;
  pfVar1 = (float *)FUN_02ef4254(0,param_3,param_4);
  if (pfVar1 != (float *)0x0) {
    fVar8 = (float)param_1;
    if (*(long *)(pfVar1 + 2) != 0) {
      if (param_5 == 1) {
        local_90 = CONCAT44(local_90._4_4_,*(undefined4 *)((long)&DAT_0440a800 + uVar6 * 4));
        pfVar3 = *(float **)(param_2 + 0x98);
        pfVar4 = pfVar3;
        if (pfVar3 != (float *)0x0) {
          uVar5 = 0;
          pfVar4 = (float *)((long)pfVar3 + ((ulong)(*(byte *)pfVar3 + 4) & 0x1fc));
          do {
            if ((uint)*(byte *)((long)pfVar3 + uVar5 + 1) == (param_4 & 0xff)) goto LAB_02ed5ffc;
            uVar5 = uVar5 + 1;
            pfVar4 = pfVar4 + 1;
          } while (uVar5 < *(byte *)pfVar3);
          pfVar4 = (float *)0x0;
        }
LAB_02ed5ffc:
        pfVar3 = (float *)&local_90;
        if (pfVar4 != (float *)0x0) {
          pfVar3 = pfVar4;
        }
        param_1 = (ulong)(uint)(fVar8 - *pfVar3);
      }
      FUN_02f0f0a8(param_1,DAT_0440a150,*(long *)(pfVar1 + 2),uVar6,param_7,param_6,param_5);
      return;
    }
    fVar7 = *pfVar1;
    if (param_5 == 1) {
      local_90 = CONCAT44(local_90._4_4_,*(undefined4 *)((long)&DAT_0440a800 + uVar6 * 4));
      pfVar3 = *(float **)(param_2 + 0x98);
      pfVar4 = pfVar3;
      if (pfVar3 != (float *)0x0) {
        uVar5 = 0;
        pfVar4 = (float *)((long)pfVar3 + ((ulong)(*(byte *)pfVar3 + 4) & 0x1fc));
        do {
          if ((uint)*(byte *)((long)pfVar3 + uVar5 + 1) == (param_4 & 0xff)) goto LAB_02ed5ebc;
          uVar5 = uVar5 + 1;
          pfVar4 = pfVar4 + 1;
        } while (uVar5 < *(byte *)pfVar3);
        pfVar4 = (float *)0x0;
      }
LAB_02ed5ebc:
      pfVar3 = (float *)&local_90;
      if (pfVar4 != (float *)0x0) {
        pfVar3 = pfVar4;
      }
      fStack_7c = fVar8 - *pfVar3;
    }
    else {
      fStack_7c = 0.0;
      if (param_5 == 2) {
        fStack_7c = fVar7 + fVar8;
      }
    }
    if ((param_7 == 0) || (fVar7 == fStack_7c)) {
      *pfVar1 = fStack_7c;
      local_90 = *(long *)(param_3 + 0x10);
      local_80 = 0.0;
      local_88 = (ulong)local_88._4_4_ << 0x20;
      local_78 = CONCAT31(local_78._1_3_,0xff);
      local_70 = CONCAT31(local_70._1_3_,0xff);
      local_68 = 0;
      FUN_02ee9820(*pfVar1,*pfVar1 - fVar7,param_2 + 0x48,*(undefined4 *)(&DAT_03a9f0d0 + uVar6 * 4)
                   ,&local_90);
    }
    else {
      local_6c = (&DAT_03a9f2dc)[uVar6];
      local_70 = 10;
      local_6b = 1;
      local_90 = param_3;
      local_88 = uVar6;
      local_80 = fVar7;
      local_78 = param_7;
      uStack_74 = param_6;
      uVar2 = FUN_02f0ed58(DAT_0440a150,&local_90,1,0);
      *(undefined8 *)(pfVar1 + 2) = uVar2;
    }
  }
  return;
}


