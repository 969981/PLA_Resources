/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00365270; name: FUN_00365270
 */


ulong FUN_00365270(undefined4 param_1,long *param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long extraout_x1;
  undefined1 auStack_a8 [8];
  byte local_a0 [16];
  undefined8 local_90;
  undefined1 auStack_70 [64];
  
  lVar3 = (**(code **)(*param_2 + 0x98))(param_2);
  if (*(long *)(*(long *)(lVar3 + 0x10) + 0x10) != param_3) {
    lVar3 = (**(code **)(*param_2 + 0x98))(param_2);
    iVar1 = FUN_0033f438(*(undefined8 *)(param_3 + 0x20),param_3,*(undefined8 *)(lVar3 + 8));
    if (extraout_x1 != 0 && iVar1 == 1) {
      FUN_003800dc(auStack_70);
                    /* try { // try from 00365308 to 0036531f has its CatchHandler @ 003654d4 */
      plVar5 = (long *)FUN_003803e0(auStack_70,extraout_x1);
      puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x18))();
                    /* try { // try from 00365324 to 0036532f has its CatchHandler @ 00365488 */
      FUN_0031f010(local_a0,param_2);
                    /* try { // try from 00365330 to 0036533b has its CatchHandler @ 00365450 */
      uVar4 = FUN_0031e604(puVar6,local_a0);
      if ((local_a0[0] & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_90);
      }
      if ((uVar4 & 1) == 0) {
                    /* try { // try from 003653b4 to 003653cb has its CatchHandler @ 00365438 */
        FUN_0030f640(local_a0,2,
                     "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                     ,0x932);
                    /* try { // try from 003653cc to 003653ff has its CatchHandler @ 00365494 */
        uVar7 = FUN_0030f3ac(local_a0,"Found invalid proto option data for: ");
        lVar3 = (**(code **)(*param_2 + 0x98))(param_2);
        uVar7 = FUN_0030f3e8(uVar7,*(undefined8 *)(lVar3 + 8));
                    /* try { // try from 00365400 to 00365407 has its CatchHandler @ 00365424 */
        FUN_0030f41c(auStack_a8,uVar7);
        FUN_0030f658(local_a0);
                    /* try { // try from 00365410 to 0036541f has its CatchHandler @ 00365444 */
        uVar2 = FUN_003654f0(param_1,param_2,param_4);
      }
      else {
                    /* try { // try from 0036535c to 0036536b has its CatchHandler @ 00365444 */
        uVar2 = FUN_003654f0(param_1,puVar6,param_4);
      }
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6);
        FUN_002e2ea0(PTR_LAB_04373088,puVar6);
      }
      FUN_0038013c(auStack_70);
      return (ulong)(uVar2 & 1);
    }
  }
  uVar4 = FUN_003654f0(param_1,param_2,param_4);
  return uVar4;
}


