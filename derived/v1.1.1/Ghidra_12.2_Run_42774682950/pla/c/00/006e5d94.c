/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006e5d94; name: FUN_006e5d94
 */


void FUN_006e5d94(long param_1,long param_2)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  ulong *puVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_50,3,
                 "bazel-out/arm64-v8a-opt/bin/external/com_google_googleapis/google/rpc/status.pb.cc"
                 ,0x144);
                    /* try { // try from 006e5dd4 to 006e5de7 has its CatchHandler @ 006e5ed8 */
    uVar4 = FUN_0030f3ac(auStack_50,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 006e5de8 to 006e5def has its CatchHandler @ 006e5ed4 */
    FUN_0030f41c(auStack_58,uVar4);
    FUN_0030f658(auStack_50);
    uVar8 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar8 = *(ulong *)(param_2 + 8);
  }
  if ((uVar8 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar5 = FUN_0030c8c0();
    }
    else {
      lVar5 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_0030cefc(lVar5,(uVar8 & 0xfffffffffffffffe) + 8);
  }
  FUN_006e62a8(param_1 + 0x10,param_2 + 0x10);
  pbVar7 = *(byte **)(param_2 + 0x28);
  bVar3 = *pbVar7;
  if ((bVar3 & 1) == 0) {
    if (bVar3 >> 1 != 0) goto LAB_006e5e50;
  }
  else if (*(long *)(pbVar7 + 8) != 0) {
LAB_006e5e50:
    puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar6 = (ulong *)*puVar6;
    }
    pbVar9 = *(byte **)(param_1 + 0x28);
    if (pbVar9 == PTR_DAT_043730c0) {
      FUN_0029175c((undefined8 *)(param_1 + 0x28),puVar6);
      iVar2 = *(int *)(param_2 + 0x30);
      goto joined_r0x006e5e9c;
    }
    if (pbVar9 != pbVar7) {
      uVar8 = *(ulong *)(pbVar7 + 8);
      pbVar1 = *(byte **)(pbVar7 + 0x10);
      if ((bVar3 & 1) == 0) {
        pbVar1 = pbVar7 + 1;
        uVar8 = (ulong)(bVar3 >> 1);
      }
      FUN_00291910(pbVar9,pbVar1,uVar8);
    }
  }
  iVar2 = *(int *)(param_2 + 0x30);
joined_r0x006e5e9c:
  if (iVar2 != 0) {
    *(int *)(param_1 + 0x30) = iVar2;
  }
  return;
}


