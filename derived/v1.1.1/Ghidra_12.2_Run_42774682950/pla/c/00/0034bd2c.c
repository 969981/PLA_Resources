/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0034bd2c; name: FUN_0034bd2c
 */


undefined8 FUN_0034bd2c(long param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  ulong uVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long lVar6;
  byte *pbVar7;
  int *piVar8;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  if (param_3 == (undefined4 *)0x0) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                 ,0xba1);
                    /* try { // try from 0034be7c to 0034be8f has its CatchHandler @ 0034bec0 */
    uVar5 = FUN_0030f3ac(auStack_50,"CHECK failed: out_location != nullptr: ");
                    /* try { // try from 0034be90 to 0034be97 has its CatchHandler @ 0034bebc */
    FUN_0030f41c(auStack_58,uVar5);
    FUN_0030f658(auStack_50);
    lVar6 = *(long *)(param_1 + 0x98);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x98);
  }
  if (lVar6 == 0) {
    return 0;
  }
  lVar6 = FUN_00341e78(*(undefined8 *)(param_1 + 0x90),param_2);
  uVar5 = 0;
  if (lVar6 != 0) {
    piVar8 = (int *)(lVar6 + 0x30);
    if (1 < *piVar8 - 3U) {
      return 0;
    }
    puVar4 = (undefined4 *)FUN_00326ad0(piVar8,0);
    *param_3 = *puVar4;
    puVar4 = (undefined4 *)FUN_00326ad0(piVar8,1);
    param_3[2] = *puVar4;
    puVar4 = (undefined4 *)FUN_00326ad0(piVar8,(ulong)(*(int *)(lVar6 + 0x30) != 3) << 1);
    param_3[1] = *puVar4;
    puVar4 = (undefined4 *)FUN_00326ad0(piVar8,*(int *)(lVar6 + 0x30) + -1);
    param_3[3] = *puVar4;
    pbVar7 = *(byte **)(lVar6 + 0x60);
    if ((byte *)(param_3 + 4) != pbVar7) {
      uVar2 = *(ulong *)(pbVar7 + 8);
      pbVar3 = *(byte **)(pbVar7 + 0x10);
      if ((*pbVar7 & 1) == 0) {
        pbVar3 = pbVar7 + 1;
        uVar2 = (ulong)(*pbVar7 >> 1);
      }
      FUN_00291910(param_3 + 4,pbVar3,uVar2);
    }
    pbVar7 = *(byte **)(lVar6 + 0x68);
    if ((byte *)(param_3 + 10) != pbVar7) {
      uVar2 = *(ulong *)(pbVar7 + 8);
      pbVar3 = *(byte **)(pbVar7 + 0x10);
      if ((*pbVar7 & 1) == 0) {
        pbVar3 = pbVar7 + 1;
        uVar2 = (ulong)(*pbVar7 >> 1);
      }
      FUN_00291910(param_3 + 10,pbVar3,uVar2);
    }
    lVar1 = 0;
    if (*(long *)(lVar6 + 0x58) != 0) {
      lVar1 = *(long *)(lVar6 + 0x58) + 8;
    }
    FUN_0034bed4(param_3 + 0x10,lVar1,lVar1 + (long)*(int *)(lVar6 + 0x50) * 8);
    uVar5 = 1;
  }
  return uVar5;
}


