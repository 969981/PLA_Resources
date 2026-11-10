/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a48464; name: FUN_01a48464
 */


void FUN_01a48464(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  
  if (*(char *)(param_1 + 0xe110) != '\0') {
    if (*(char *)(param_1 + 0xde00) == '\0') {
      local_98 = *(undefined8 *)(param_1 + 0xe218);
      local_a8 = *(undefined8 *)(param_1 + 0xe208);
      local_b8 = *(undefined8 *)(param_1 + 0xe1f8);
      local_c0 = *(undefined8 *)(param_1 + 0xe1f0);
      local_b0 = *(undefined8 *)(param_1 + 0xe200);
      local_a0 = *(undefined8 *)(param_1 + 0xe210);
      local_90 = *(undefined8 *)(param_1 + 0xe220);
      FUN_01832100(&local_80,&local_c0,1);
      local_a0 = CONCAT44(uStack_5c,uStack_60);
      local_a8 = local_68;
      local_98 = CONCAT44(uStack_54,local_58);
      local_90 = CONCAT44(uStack_4c,local_50);
      local_b0 = local_70;
      local_c0 = local_80;
      local_b8 = uStack_78;
      lVar1 = param_1 + 0x5b0;
      if ((*(int *)(param_1 + 0xdd50) == 0) && (*(char *)(param_1 + 0xe328) != '\0')) {
        lVar3 = param_1 + 0xe340;
      }
      else {
        lVar3 = param_1 + (long)*(int *)(param_1 + 0xdd50) * 0x960 + 0xf10;
      }
      FUN_019039e0(lVar1,lVar3);
      fVar4 = (float)FUN_01904460(local_a0._4_4_,lVar1);
      *(double *)(param_1 + 0x700) = (double)fVar4;
      FUN_01903f90(&local_80,lVar1);
      *(undefined4 *)(param_1 + 0xdd80) = (undefined4)local_a0;
      uVar2 = *(uint *)(param_1 + 0xe25c);
      *(undefined8 *)(param_1 + 0x4a8) = local_98;
      *(undefined8 *)(param_1 + 0x498) = local_a8;
      *(undefined8 *)(param_1 + 0x488) = local_b8;
      *(undefined8 *)(param_1 + 0x490) = local_b0;
      *(undefined8 *)(param_1 + 0x480) = local_c0;
      *(undefined8 *)(param_1 + 0x4b0) = local_90;
      *(undefined8 *)(param_1 + 0x4a0) = local_a0;
      *(undefined8 *)(param_1 + 0x510) = local_b0;
      *(undefined8 *)(param_1 + 0x500) = local_c0;
      *(undefined8 *)(param_1 + 0x508) = local_b8;
      *(undefined8 *)(param_1 + 0x530) = local_90;
      *(undefined8 *)(param_1 + 0x520) = local_a0;
      *(undefined8 *)(param_1 + 0x528) = local_98;
      *(undefined8 *)(param_1 + 0x518) = local_a8;
      *(undefined4 *)(param_1 + 0x4e0) = (undefined4)local_a0;
      *(undefined8 *)(param_1 + 0x4c8) = uStack_78;
      *(undefined8 *)(param_1 + 0x4c0) = local_80;
      *(undefined8 *)(param_1 + 0x4d8) = local_68;
      *(undefined8 *)(param_1 + 0x4d0) = local_70;
      *(ulong *)(param_1 + 0x4e4) = CONCAT44(local_58,uStack_5c);
      *(undefined4 *)(param_1 + 0x4ec) = local_98._4_4_;
      *(undefined4 *)(param_1 + 0x4f0) = local_50;
      *(undefined4 *)(param_1 + 0x4f4) = 1;
      *(undefined4 *)(param_1 + 0x540) = *(undefined4 *)(param_1 + 0xe260);
      *(uint *)(param_1 + 0x548) = uVar2;
      if (uVar2 == 0) {
        fVar4 = 1.0;
      }
      else {
        fVar4 = 1.0 / (float)uVar2;
      }
      *(float *)(param_1 + 0x544) = fVar4;
      *(undefined4 *)(param_1 + 0x54c) = 0;
      *(undefined4 *)(param_1 + 0x3e4) = 1;
    }
    else {
      FUN_01a463d4(param_1,1);
    }
    *(undefined2 *)(param_1 + 0xe110) = 0;
  }
  return;
}


