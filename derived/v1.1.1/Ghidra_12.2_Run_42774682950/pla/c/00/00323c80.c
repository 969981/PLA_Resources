/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00323c80; name: FUN_00323c80
 */


ulong * FUN_00323c80(ulong param_1,long *param_2,ulong *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong local_70 [6];
  undefined1 auStack_38 [8];
  
  uVar1 = param_1 >> 3;
  if ((int)uVar1 == 0) {
LAB_00323d60:
    return (undefined8 *)0x0;
  }
  uVar5 = (uint)param_1;
  switch(param_1 & 7) {
  case 0:
    param_3 = (ulong *)FUN_00323ec0(param_3,local_70);
    if ((param_3 != (ulong *)0x0) && (lVar7 = *param_2, lVar7 != 0)) {
      if (0x7f < (uVar5 & 0xfffffff8)) {
        uVar1 = (ulong)(uVar5 & 0xfffffff8);
        do {
          FUN_002e6a9c(lVar7,(uint)uVar1 | 0xffffff80);
          uVar6 = uVar1 >> 0xe;
          uVar1 = uVar1 >> 7;
        } while (uVar6 != 0);
      }
      FUN_002e6a9c(lVar7);
      lVar7 = *param_2;
      uVar1 = local_70[0];
      if (0x7f < local_70[0]) {
        do {
          FUN_002e6a9c(lVar7,(uint)uVar1 | 0xffffff80);
          local_70[0] = uVar1 >> 7;
          uVar6 = uVar1 >> 0xe;
          uVar1 = local_70[0];
        } while (uVar6 != 0);
      }
      FUN_002e6a9c(lVar7,local_70[0] & 0xffffffff);
    }
    break;
  case 1:
    uVar1 = *param_3;
    lVar7 = *param_2;
    if (lVar7 == 0) {
      return param_3 + 1;
    }
    uVar5 = uVar5 & 0xfffffff8 | 1;
    if (0x7f < uVar5) {
      uVar6 = (ulong)uVar5;
      do {
        FUN_002e6a9c(lVar7,(uint)uVar6 | 0xffffff80);
        uVar3 = uVar6 >> 0xe;
        uVar6 = uVar6 >> 7;
      } while (uVar3 != 0);
    }
    FUN_002e6a9c(lVar7);
    lVar7 = *param_2;
    uVar2 = 8;
    param_3 = param_3 + 1;
    local_70[0] = uVar1;
    goto LAB_00323e94;
  case 2:
    param_3 = (ulong *)FUN_00325550(param_2,uVar1,param_3);
    break;
  case 3:
    param_3 = (ulong *)FUN_0032575c(param_2,uVar1,param_3);
    break;
  case 4:
    FUN_0030f640(local_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/parse_context.h"
                 ,0x2b6);
                    /* try { // try from 00323d94 to 00323da7 has its CatchHandler @ 00323ea0 */
    uVar2 = FUN_0030f3ac(local_70,"Can\'t happen");
                    /* try { // try from 00323da8 to 00323daf has its CatchHandler @ 00323e9c */
    FUN_0030f41c(auStack_38,uVar2);
    FUN_0030f658(local_70);
    break;
  case 5:
    uVar1 = *param_3;
    lVar7 = *param_2;
    if (lVar7 == 0) {
      return (ulong *)((long)param_3 + 4);
    }
    uVar5 = uVar5 & 0xfffffff8 | 5;
    uVar6 = (ulong)uVar5;
    if (0x7f < uVar5) {
      uVar3 = (ulong)uVar5;
      do {
        FUN_002e6a9c(lVar7,(uint)uVar3 | 0xffffff80);
        uVar6 = uVar3 >> 7;
        uVar4 = uVar3 >> 0xe;
        uVar3 = uVar6;
      } while (uVar4 != 0);
    }
    FUN_002e6a9c(lVar7,uVar6);
    local_70[0] = CONCAT44(local_70[0]._4_4_,(int)uVar1);
    lVar7 = *param_2;
    uVar2 = 4;
    param_3 = (ulong *)((long)param_3 + 4);
LAB_00323e94:
    FUN_002e4094(lVar7,local_70,uVar2);
    break;
  default:
    goto LAB_00323d60;
  }
  return param_3;
}


