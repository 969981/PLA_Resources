/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060b084; name: FUN_0060b084
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0060b084(long param_1,long param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  undefined8 uVar5;
  long lVar6;
  ulong *puVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/any.pb.cc",
                 0x130);
                    /* try { // try from 0060b0e0 to 0060b0f3 has its CatchHandler @ 0060b24c */
    uVar5 = FUN_0030f3ac(auStack_50,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 0060b0f4 to 0060b0fb has its CatchHandler @ 0060b248 */
    FUN_0030f41c(auStack_58,uVar5);
    FUN_0030f658(auStack_50);
    uVar9 = *(ulong *)(param_2 + 8);
    if ((uVar9 & 1) != 0) goto LAB_0060b10c;
LAB_0060b0a8:
    pbVar8 = *(byte **)(param_2 + 0x10);
    uVar9 = (ulong)*pbVar8;
    if ((*pbVar8 & 1) == 0) goto LAB_0060b0b4;
LAB_0060b13c:
    uVar10 = *(ulong *)(pbVar8 + 8);
    pbVar3 = PTR_DAT_043730c0;
  }
  else {
    uVar9 = *(ulong *)(param_2 + 8);
    if ((uVar9 & 1) == 0) goto LAB_0060b0a8;
LAB_0060b10c:
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar6 = FUN_0030c8c0();
    }
    else {
      lVar6 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_0030cefc(lVar6,(uVar9 & 0xfffffffffffffffe) + 8);
    pbVar8 = *(byte **)(param_2 + 0x10);
    uVar9 = (ulong)*pbVar8;
    if ((*pbVar8 & 1) != 0) goto LAB_0060b13c;
LAB_0060b0b4:
    uVar10 = uVar9 >> 1;
    pbVar3 = PTR_DAT_043730c0;
  }
  PTR_DAT_043730c0 = pbVar3;
  if (uVar10 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x10);
    puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      pbVar11 = (byte *)*puVar1;
    }
    else {
      puVar7 = (ulong *)*puVar7;
      pbVar11 = (byte *)*puVar1;
    }
    if (pbVar11 == pbVar3) {
      FUN_0029175c(puVar1,puVar7);
      pbVar8 = *(byte **)(param_2 + 0x18);
      bVar4 = *pbVar8;
      goto joined_r0x0060b194;
    }
    if (pbVar11 != pbVar8) {
      uVar10 = *(ulong *)(pbVar8 + 8);
      pbVar2 = *(byte **)(pbVar8 + 0x10);
      if ((uVar9 & 1) == 0) {
        pbVar2 = pbVar8 + 1;
        uVar10 = uVar9 >> 1;
      }
      FUN_00291910(pbVar11,pbVar2,uVar10);
    }
  }
  pbVar8 = *(byte **)(param_2 + 0x18);
  bVar4 = *pbVar8;
joined_r0x0060b194:
  if ((bVar4 & 1) == 0) {
    uVar9 = (ulong)(bVar4 >> 1);
  }
  else {
    uVar9 = *(ulong *)(pbVar8 + 8);
  }
  if (uVar9 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x18);
    puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      pbVar11 = (byte *)*puVar1;
    }
    else {
      puVar7 = (ulong *)*puVar7;
      pbVar11 = (byte *)*puVar1;
    }
    if (pbVar11 == pbVar3) {
      FUN_0029175c(puVar1,puVar7);
      return;
    }
    if (pbVar11 != pbVar8) {
      uVar9 = *(ulong *)(pbVar8 + 8);
      pbVar3 = *(byte **)(pbVar8 + 0x10);
      if ((bVar4 & 1) == 0) {
        pbVar3 = pbVar8 + 1;
        uVar9 = (ulong)(bVar4 >> 1);
      }
      FUN_00291910(pbVar11,pbVar3,uVar9);
    }
  }
  return;
}


