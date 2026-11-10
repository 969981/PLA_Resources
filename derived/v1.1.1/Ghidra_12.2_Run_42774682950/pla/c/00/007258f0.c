/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007258f0; name: FUN_007258f0
 */


void FUN_007258f0(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [48];
  long local_38;
  
  if ((long *)param_2[1] != param_1) {
    FUN_0030f640(auStack_70,3,"external/com_google_protobuf/src\\google/protobuf/map.h",0x28e);
                    /* try { // try from 00725930 to 00725943 has its CatchHandler @ 00725b2c */
    uVar1 = FUN_0030f3ac(auStack_70,"CHECK failed: (it.m_) == (this): ");
                    /* try { // try from 00725944 to 0072594b has its CatchHandler @ 00725b28 */
    FUN_0030f41c(&local_38,uVar1);
    FUN_0030f658(auStack_70);
  }
  local_38 = 0;
  uVar2 = FUN_00725c5c(param_2,&local_38);
  uVar6 = param_2[2];
  lVar4 = param_1[4];
  uVar1 = *param_2;
  lVar5 = *(long *)(lVar4 + uVar6 * 8);
  if ((uVar2 & 1) == 0) {
    if ((lVar5 == 0) || (lVar5 != *(long *)(lVar4 + (uVar6 ^ 1) * 8))) {
      FUN_0030f640(auStack_70,3,"external/com_google_protobuf/src\\google/protobuf/map.h",0x299);
                    /* try { // try from 00725a20 to 00725a33 has its CatchHandler @ 00725b24 */
      uVar3 = FUN_0030f3ac(auStack_70,"CHECK failed: TableEntryIsTree(b): ");
                    /* try { // try from 00725a34 to 00725a3b has its CatchHandler @ 00725b20 */
      FUN_0030f41c(auStack_78,uVar3);
      FUN_0030f658(auStack_70);
      lVar4 = param_1[4];
    }
    lVar4 = *(long *)(lVar4 + uVar6 * 8);
    FUN_006345f4(lVar4,local_38 + 0x20);
    if (*(long *)(lVar4 + 0x18) == 0) {
      lVar5 = param_1[5];
      FUN_00634738(lVar4,*(undefined8 *)(lVar4 + 8));
      if (lVar5 == 0) {
        FUN_002ee710(lVar4);
      }
      *(undefined8 *)(param_1[4] + (uVar6 << 3 | 8)) = 0;
      *(undefined8 *)(param_1[4] + (uVar6 & 0xfffffffffffffffe) * 8) = 0;
      lVar4 = param_1[5];
      uVar6 = uVar6 & 0xfffffffffffffffe;
    }
    else {
      lVar4 = param_1[5];
    }
  }
  else {
    if ((lVar5 == 0) || (lVar5 == *(long *)(lVar4 + (uVar6 ^ 1) * 8))) {
      FUN_0030f640(auStack_70,3,"external/com_google_protobuf/src\\google/protobuf/map.h",0x294);
                    /* try { // try from 007259a4 to 007259b7 has its CatchHandler @ 00725b1c */
      uVar3 = FUN_0030f3ac(auStack_70,"CHECK failed: TableEntryIsNonEmptyList(b): ");
                    /* try { // try from 007259b8 to 007259bf has its CatchHandler @ 00725b18 */
      FUN_0030f41c(auStack_78,uVar3);
      FUN_0030f658(auStack_70);
      lVar4 = param_1[4];
    }
    uVar3 = FUN_00725d7c(param_1,uVar1,*(undefined8 *)(lVar4 + uVar6 * 8));
    *(undefined8 *)(param_1[4] + uVar6 * 8) = uVar3;
    lVar4 = param_1[5];
  }
  if (lVar4 == 0) {
    FUN_002ee710(uVar1);
  }
  *param_1 = *param_1 + -1;
  if ((uVar6 == param_1[3]) && (uVar6 < (ulong)param_1[1])) {
    do {
      if (*(long *)(param_1[4] + uVar6 * 8) != 0) {
        return;
      }
      uVar6 = uVar6 + 1;
      param_1[3] = uVar6;
    } while (uVar6 < (ulong)param_1[1]);
  }
  return;
}


