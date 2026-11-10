/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025b3ca4; name: FUN_025b3ca4
 */


void FUN_025b3ca4(long param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  if (*(char *)(param_1 + 0x234) != '\0') {
    if ((*(float *)(param_1 + 0x244) <= 1.1920929e-07) ||
       (fVar5 = *(float *)(param_1 + 0x248), *(float *)(param_1 + 0x244) - fVar5 <= 1.1920929e-07))
    {
      cVar1 = *(char *)(param_1 + 0x218);
    }
    else {
      lVar2 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
      fVar5 = fVar5 + (float)((double)*(long *)(lVar2 + 8) / 1000000000.0);
      local_50 = CONCAT44(local_50._4_4_,fVar5);
      pfVar4 = (float *)(param_1 + 0x244);
      if (fVar5 <= *(float *)(param_1 + 0x244)) {
        pfVar4 = (float *)&local_50;
      }
      if (fVar5 < 0.0) {
        pfVar4 = (float *)&local_70;
      }
      fVar5 = *pfVar4;
      *(float *)(param_1 + 0x248) = fVar5;
      *(float *)(param_1 + 0x238) = fVar5 / *(float *)(param_1 + 0x244);
      local_50 = 0xf1546034b1dfb31c;
      pcStack_48 = "area_speed";
      local_40 = 10;
      local_38 = (long *)0x0;
      local_70 = 0x2e1c4be282d162fb;
      pcStack_68 = "airthrow_slowEaseFunc";
      local_60 = 0x15;
      local_58 = (long *)0x0;
      uVar3 = FUN_00ea3f80(&local_50,&local_70);
      fVar6 = *(float *)(param_1 + 0x23c);
      fVar7 = *(float *)(param_1 + 0x240);
      fVar5 = (float)(**(code **)(PTR_PTR_0437a4c8 + (uVar3 & 0xffffffff) * 8))
                               (*(undefined4 *)(param_1 + 0x238));
      FUN_025b3ed4(fVar6 + (fVar7 - fVar6) * fVar5,param_1);
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      cVar1 = *(char *)(param_1 + 0x218);
    }
    if (cVar1 != '\0') {
      lVar2 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
      fVar5 = *(float *)(param_1 + 0x224) + (float)((double)*(long *)(lVar2 + 8) / 1000000000.0);
      local_50 = CONCAT44(local_50._4_4_,fVar5);
      pfVar4 = (float *)(param_1 + 0x220);
      if (fVar5 <= *(float *)(param_1 + 0x220)) {
        pfVar4 = (float *)&local_50;
      }
      fVar5 = *pfVar4;
      *(float *)(param_1 + 0x224) = fVar5;
      if (*(float *)(param_1 + 0x220) - fVar5 < 1.1920929e-07) {
        FUN_025b2ea4(param_1);
      }
    }
  }
  return;
}


