/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030e574; name: FUN_0030e574
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0030e574(long param_1,long *param_2,int *param_3)

{
  byte bVar1;
  ulong *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  puVar2 = *(ulong **)(param_1 + 8);
  if (puVar2 == (ulong *)0x0) {
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/io/zero_copy_stream_impl_lite.cc"
                 ,0x8e);
                    /* try { // try from 0030e628 to 0030e63b has its CatchHandler @ 0030e774 */
    uVar3 = FUN_0030f3ac(auStack_60,"CHECK failed: target_ != NULL: ");
                    /* try { // try from 0030e63c to 0030e643 has its CatchHandler @ 0030e770 */
    FUN_0030f41c(auStack_28,uVar3);
    FUN_0030f658(auStack_60);
    puVar2 = *(ulong **)(param_1 + 8);
    uVar5 = (ulong)(byte)*puVar2;
    if (((byte)*puVar2 & 1) != 0) goto LAB_0030e658;
LAB_0030e5a0:
    iVar7 = (int)(uVar5 >> 1);
    uVar11 = (ulong)iVar7;
    if (0x15 < uVar11) goto LAB_0030e5b4;
LAB_0030e670:
    if ((uVar5 & 1) != 0) {
      uVar8 = (*puVar2 & 0xfffffffffffffffe) - 1;
      lVar4 = uVar8 - puVar2[1];
      if (uVar8 < puVar2[1] || lVar4 == 0) goto joined_r0x0030e684;
      goto LAB_0030e714;
    }
    uVar8 = 0x16;
    lVar4 = 0x16 - (uVar5 >> 1);
    if (uVar5 >> 1 < 0x17 && lVar4 != 0) goto LAB_0030e714;
  }
  else {
    uVar5 = (ulong)(byte)*puVar2;
    if (((byte)*puVar2 & 1) == 0) goto LAB_0030e5a0;
LAB_0030e658:
    iVar7 = (int)puVar2[1];
    uVar11 = (ulong)iVar7;
    if (uVar11 < (*puVar2 & 0xfffffffffffffffe) - 1) goto LAB_0030e670;
LAB_0030e5b4:
    if (0x3fffffff < iVar7) {
      FUN_0030f640(auStack_60,2,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/io/zero_copy_stream_impl_lite.cc"
                   ,0x9b);
                    /* try { // try from 0030e5d8 to 0030e5f7 has its CatchHandler @ 0030e778 */
      uVar3 = FUN_0030f3ac(auStack_60,"Cannot allocate buffer larger than kint32max for ");
      uVar3 = FUN_0030f3ac(uVar3,"StringOutputStream.");
                    /* try { // try from 0030e5f8 to 0030e5ff has its CatchHandler @ 0030e76c */
      FUN_0030f41c(auStack_28,uVar3);
      FUN_0030f658(auStack_60);
      return 0;
    }
    uVar9 = iVar7 * 2;
    if ((int)uVar9 < 0x11) {
      uVar9 = 0x10;
    }
    uVar8 = (ulong)uVar9;
    if ((uVar5 & 1) == 0) {
      uVar10 = uVar5 >> 1;
    }
    else {
      uVar10 = puVar2[1];
    }
    if (uVar10 < uVar8) {
      lVar4 = uVar8 - uVar10;
LAB_0030e714:
      FUN_002e6bd4(puVar2,lVar4,0);
      pbVar6 = *(byte **)(param_1 + 8);
      bVar1 = *pbVar6;
      goto joined_r0x0030e6a0;
    }
  }
joined_r0x0030e684:
  if ((uVar5 & 1) == 0) {
    *(undefined1 *)((long)puVar2 + uVar8 + 1) = 0;
    *(char *)puVar2 = (char)((int)uVar8 << 1);
    pbVar6 = *(byte **)(param_1 + 8);
    bVar1 = *pbVar6;
  }
  else {
    *(undefined1 *)(puVar2[2] + uVar8) = 0;
    puVar2[1] = uVar8;
    pbVar6 = *(byte **)(param_1 + 8);
    bVar1 = *pbVar6;
  }
joined_r0x0030e6a0:
  if ((bVar1 & 1) == 0) {
    pbVar6 = pbVar6 + 1;
  }
  else {
    pbVar6 = *(byte **)(pbVar6 + 0x10);
  }
  *param_2 = (long)(pbVar6 + uVar11);
  bVar1 = **(byte **)(param_1 + 8);
  if ((bVar1 & 1) == 0) {
    uVar9 = (uint)(bVar1 >> 1);
  }
  else {
    uVar9 = (uint)*(undefined8 *)(*(byte **)(param_1 + 8) + 8);
  }
  *param_3 = uVar9 - (int)uVar11;
  return 1;
}


