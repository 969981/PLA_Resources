/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0039a354; name: FUN_0039a354
 */


void FUN_0039a354(long param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 auStack_70 [48];
  undefined1 auStack_38 [8];
  
  if (param_2 < 8) {
    FUN_0030f640(auStack_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/map.h",
                 0x331);
                    /* try { // try from 0039a390 to 0039a3a3 has its CatchHandler @ 0039a484 */
    uVar1 = FUN_0030f3ac(auStack_70,"CHECK failed: (new_num_buckets) >= (kMinTableSize): ");
                    /* try { // try from 0039a3a4 to 0039a3ab has its CatchHandler @ 0039a480 */
    FUN_0030f41c(auStack_38,uVar1);
    FUN_0030f658(auStack_70);
  }
  uVar6 = *(ulong *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x20);
  *(ulong *)(param_1 + 8) = param_2;
  uVar1 = FUN_003990a4(param_1,param_2);
  uVar4 = *(ulong *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  for (; uVar4 < uVar6; uVar4 = uVar4 + 1) {
    puVar5 = *(undefined8 **)(lVar3 + uVar4 * 8);
    if (puVar5 != (undefined8 *)0x0) {
      if (puVar5 == *(undefined8 **)(lVar3 + (uVar4 ^ 1) * 8)) {
        FUN_0039a498(param_1,lVar3,uVar4);
        uVar4 = uVar4 + 1;
      }
      else {
        do {
          puVar7 = (undefined8 *)puVar5[2];
          lVar2 = FUN_00399990(param_1,*puVar5);
          FUN_0039a140(auStack_70,param_1,
                       *(long *)(param_1 + 8) - 1U & *(long *)(param_1 + 0x10) + lVar2,puVar5);
          puVar5 = puVar7;
        } while (puVar7 != (undefined8 *)0x0);
      }
    }
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    FUN_002ee710(lVar3);
  }
  return;
}


