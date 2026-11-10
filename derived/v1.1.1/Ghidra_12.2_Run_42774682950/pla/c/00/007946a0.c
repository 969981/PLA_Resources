/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007946a0; name: FUN_007946a0
 */


void FUN_007946a0(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  long lVar4;
  byte bVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  if (param_2 < 8) {
    FUN_0030f640(auStack_60,3,"external/com_google_protobuf/src\\google/protobuf/map.h",0x331);
                    /* try { // try from 007946d8 to 007946eb has its CatchHandler @ 007947f4 */
    uVar1 = FUN_0030f3ac(auStack_60,"CHECK failed: (new_num_buckets) >= (kMinTableSize): ");
                    /* try { // try from 007946ec to 007946f3 has its CatchHandler @ 007947f0 */
    FUN_0030f41c(auStack_68,uVar1);
    FUN_0030f658(auStack_60);
  }
  uVar9 = *(ulong *)(param_1 + 8);
  lVar7 = *(long *)(param_1 + 0x20);
  *(ulong *)(param_1 + 8) = param_2;
  uVar1 = FUN_00794808(param_1,param_2);
  uVar8 = *(ulong *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  for (; uVar8 < uVar9; uVar8 = uVar8 + 1) {
    puVar2 = *(undefined8 **)(lVar7 + uVar8 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      if (puVar2 == *(undefined8 **)(lVar7 + (uVar8 ^ 1) * 8)) {
        FUN_0079492c(param_1,lVar7,uVar8);
        uVar8 = uVar8 + 1;
      }
      else {
        do {
          pbVar3 = (byte *)*puVar2;
          pbVar6 = *(byte **)(pbVar3 + 0x10);
          if ((*pbVar3 & 1) == 0) {
            pbVar6 = pbVar3 + 1;
          }
          puVar2 = (undefined8 *)puVar2[2];
          bVar5 = *pbVar6;
          if (bVar5 == 0) {
            lVar4 = 0;
          }
          else {
            lVar4 = 0;
            do {
              pbVar6 = pbVar6 + 1;
              lVar4 = lVar4 * 5 + (ulong)bVar5;
              bVar5 = *pbVar6;
            } while (bVar5 != 0);
          }
          FUN_00794298(auStack_60,param_1,
                       *(long *)(param_1 + 8) - 1U & *(long *)(param_1 + 0x10) + lVar4);
        } while (puVar2 != (undefined8 *)0x0);
      }
    }
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    FUN_002ee710(lVar7);
  }
  return;
}


