/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00697360; name: FUN_00697360
 */


void FUN_00697360(long param_1,long param_2)

{
  long lVar1;
  byte *pbVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong *puVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_60,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/gamesync/v1/resources.pb.cc"
                 ,0x145c);
                    /* try { // try from 006973b8 to 006973cb has its CatchHandler @ 006976c4 */
    uVar4 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 006973cc to 006973d3 has its CatchHandler @ 006976c0 */
    FUN_0030f41c(auStack_28,uVar4);
    FUN_0030f658(auStack_60);
    uVar8 = *(ulong *)(param_2 + 8);
    if ((uVar8 & 1) != 0) goto LAB_006973e4;
LAB_00697388:
    pbVar7 = *(byte **)(param_2 + 0x10);
    uVar8 = (ulong)*pbVar7;
    if ((*pbVar7 & 1) == 0) goto LAB_00697394;
LAB_00697428:
    uVar9 = *(ulong *)(pbVar7 + 8);
  }
  else {
    uVar8 = *(ulong *)(param_2 + 8);
    if ((uVar8 & 1) == 0) goto LAB_00697388;
LAB_006973e4:
    uVar8 = uVar8 & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar5 = FUN_0033aecc();
    }
    else {
      lVar5 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    uVar9 = *(ulong *)(uVar8 + 0x10);
    lVar1 = *(long *)(uVar8 + 0x18);
    if ((*(byte *)(uVar8 + 8) & 1) == 0) {
      lVar1 = uVar8 + 9;
      uVar9 = (ulong)(*(byte *)(uVar8 + 8) >> 1);
    }
    FUN_002e4094(lVar5,lVar1,uVar9);
    pbVar7 = *(byte **)(param_2 + 0x10);
    uVar8 = (ulong)*pbVar7;
    if ((*pbVar7 & 1) != 0) goto LAB_00697428;
LAB_00697394:
    uVar9 = uVar8 >> 1;
  }
  if (uVar9 != 0) {
    puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar6 = (ulong *)*puVar6;
    }
    pbVar10 = *(byte **)(param_1 + 0x10);
    if (pbVar10 == PTR_DAT_043730c0) {
      FUN_0029175c((undefined8 *)(param_1 + 0x10),puVar6);
      iVar3 = *(int *)(param_2 + 0x24);
      goto joined_r0x006974d8;
    }
    if (pbVar10 != pbVar7) {
      uVar9 = *(ulong *)(pbVar7 + 8);
      pbVar2 = *(byte **)(pbVar7 + 0x10);
      if ((uVar8 & 1) == 0) {
        pbVar2 = pbVar7 + 1;
        uVar9 = uVar8 >> 1;
      }
      FUN_00291910(pbVar10,pbVar2,uVar9);
    }
  }
  iVar3 = *(int *)(param_2 + 0x24);
joined_r0x006974d8:
  if (iVar3 - 2U < 7) {
                    /* WARNING: Could not recover jumptable at 0x0069749c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_006974a0 + (ulong)(byte)(&DAT_03a518d6)[iVar3 - 2U] * 4))();
    return;
  }
  return;
}


