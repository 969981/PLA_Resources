/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00267a14; name: FUN_00267a14
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00267a14(long param_1,undefined8 param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  byte bVar8;
  undefined1 auVar9 [12];
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  byte *pbVar16;
  long lVar17;
  int iVar18;
  long *plVar19;
  float fVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  float fVar24;
  uint uVar25;
  uint uVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar37;
  float fVar39;
  undefined1 auVar33 [16];
  uint uVar32;
  uint uVar38;
  uint uVar40;
  uint uVar41;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar48;
  ulong uVar47;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined8 local_28;
  
  plVar19 = (long *)(param_1 + 0x10);
  lVar11 = *plVar19;
  if (*(long *)(lVar11 + 0x9f0) != -1) {
    uVar10 = FUN_0028d0f0(lVar11 + 0x9f0);
    lVar11 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x60) = uVar10;
  }
  if (*(long *)(lVar11 + 0xa10) != -1) {
    uVar10 = FUN_0028d0f0(lVar11 + 0xa10);
    lVar11 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x68) = uVar10;
  }
  if (*(long *)(lVar11 + 0xa30) != -1) {
    uVar10 = FUN_0028d0f0(lVar11 + 0xa30);
    lVar11 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x70) = uVar10;
  }
  if (*(char *)(lVar11 + 0x99c) == '\0') {
    *(undefined8 *)(lVar11 + 0x3c0) = *(undefined8 *)(lVar11 + 0x9a0);
    *(undefined4 *)(lVar11 + 0x3c8) = *(undefined4 *)(lVar11 + 0x9a8);
    lVar11 = *plVar19;
    cVar7 = *(char *)(lVar11 + 0x99e);
  }
  else {
    cVar7 = *(char *)(lVar11 + 0x99e);
  }
  if (cVar7 == '\0') {
    *(undefined4 *)(lVar11 + 0x440) = *(undefined4 *)(lVar11 + 0x9ac);
    lVar11 = *plVar19;
    cVar7 = *(char *)(lVar11 + 0x99d);
  }
  else {
    cVar7 = *(char *)(lVar11 + 0x99d);
  }
  if (cVar7 == '\0') {
    *(undefined8 *)(lVar11 + 0x4c0) = *(undefined8 *)(lVar11 + 0x9b0);
    *(undefined4 *)(lVar11 + 0x4c8) = *(undefined4 *)(lVar11 + 0x9b8);
    lVar11 = *plVar19;
    cVar7 = *(char *)(lVar11 + 0x99f);
  }
  else {
    cVar7 = *(char *)(lVar11 + 0x99f);
  }
  if (cVar7 == '\0') {
    *(undefined4 *)(lVar11 + 0x540) = *(undefined4 *)(lVar11 + 0x9bc);
    lVar11 = *plVar19;
  }
  if ((ulong)(long)*(char *)(lVar11 + 0xa54) < 4) {
    lVar12 = (long)*(char *)(lVar11 + 0xa54) * 4;
    uVar22 = *(undefined4 *)(&DAT_03889340 + lVar12);
    *(undefined4 *)(lVar11 + 0x300) = *(undefined4 *)(&DAT_03889c40 + lVar12);
    *(undefined4 *)(*plVar19 + 0x304) = uVar22;
    lVar11 = *plVar19;
    cVar7 = *(char *)(lVar11 + 0xa64);
  }
  else {
    lVar11 = *plVar19;
    cVar7 = *(char *)(lVar11 + 0xa64);
  }
  if ((ulong)(long)cVar7 < 4) {
    lVar12 = (long)cVar7 * 4;
    uVar22 = *(undefined4 *)(&DAT_03889340 + lVar12);
    *(undefined4 *)(lVar11 + 0x350) = *(undefined4 *)(&DAT_03889c40 + lVar12);
    *(undefined4 *)(*plVar19 + 0x354) = uVar22;
    lVar11 = *plVar19;
    cVar7 = *(char *)(lVar11 + 0xa74);
  }
  else {
    lVar11 = *plVar19;
    cVar7 = *(char *)(lVar11 + 0xa74);
  }
  if ((ulong)(long)cVar7 < 4) {
    lVar12 = (long)cVar7 * 4;
    uVar22 = *(undefined4 *)(&DAT_03889340 + lVar12);
    *(undefined4 *)(lVar11 + 0x3a0) = *(undefined4 *)(&DAT_03889c40 + lVar12);
    *(undefined4 *)(*plVar19 + 0x3a4) = uVar22;
    lVar11 = *plVar19;
    cVar7 = *(char *)(lVar11 + 0xa51);
  }
  else {
    lVar11 = *plVar19;
    cVar7 = *(char *)(lVar11 + 0xa51);
  }
  if (cVar7 == '\0') {
    *(undefined4 *)(lVar11 + 0x2c8) = 0;
    *(undefined4 *)(*plVar19 + 0x2cc) = 0;
    *(undefined4 *)(*plVar19 + 0x2c0) = 0;
    *(undefined4 *)(*plVar19 + 0x2c4) = 0;
    *(undefined4 *)(*plVar19 + 0x2d0) = 0;
    *(undefined4 *)(*plVar19 + 0x2d4) = 0;
    lVar11 = *plVar19;
    cVar7 = *(char *)(lVar11 + 0xa61);
  }
  else {
    cVar7 = *(char *)(lVar11 + 0xa61);
  }
  if (cVar7 == '\0') {
    *(undefined4 *)(lVar11 + 0x318) = 0;
    *(undefined4 *)(*plVar19 + 0x31c) = 0;
    *(undefined4 *)(*plVar19 + 0x310) = 0;
    *(undefined4 *)(*plVar19 + 0x314) = 0;
    *(undefined4 *)(*plVar19 + 800) = 0;
    *(undefined4 *)(*plVar19 + 0x324) = 0;
    lVar11 = *plVar19;
    cVar7 = *(char *)(lVar11 + 0xa71);
  }
  else {
    cVar7 = *(char *)(lVar11 + 0xa71);
  }
  if (cVar7 == '\0') {
    *(undefined4 *)(lVar11 + 0x368) = 0;
    *(undefined4 *)(*plVar19 + 0x36c) = 0;
    *(undefined4 *)(*plVar19 + 0x360) = 0;
    *(undefined4 *)(*plVar19 + 0x364) = 0;
    *(undefined4 *)(*plVar19 + 0x370) = 0;
    *(undefined4 *)(*plVar19 + 0x374) = 0;
    lVar11 = *plVar19;
    cVar7 = *(char *)(lVar11 + 0xa52);
  }
  else {
    cVar7 = *(char *)(lVar11 + 0xa52);
  }
  if (cVar7 == '\0') {
    *(undefined4 *)(lVar11 + 0x2f0) = 0;
    *(undefined4 *)(*plVar19 + 0x2f4) = 0;
    *(undefined4 *)(*plVar19 + 0x2f8) = 0;
    lVar11 = *plVar19;
    cVar7 = *(char *)(lVar11 + 0xa62);
  }
  else {
    cVar7 = *(char *)(lVar11 + 0xa62);
  }
  if (cVar7 == '\0') {
    *(undefined4 *)(lVar11 + 0x340) = 0;
    *(undefined4 *)(*plVar19 + 0x344) = 0;
    *(undefined4 *)(*plVar19 + 0x348) = 0;
    lVar11 = *plVar19;
    cVar7 = *(char *)(lVar11 + 0xa72);
  }
  else {
    cVar7 = *(char *)(lVar11 + 0xa72);
  }
  if (cVar7 == '\0') {
    *(undefined4 *)(lVar11 + 0x390) = 0;
    *(undefined4 *)(*plVar19 + 0x394) = 0;
    *(undefined4 *)(*plVar19 + 0x398) = 0;
    lVar11 = *plVar19;
    cVar7 = *(char *)(lVar11 + 0xa53);
  }
  else {
    cVar7 = *(char *)(lVar11 + 0xa53);
  }
  if (cVar7 == '\0') {
    *(undefined4 *)(lVar11 + 0x2e0) = 0x3f800000;
    *(undefined4 *)(*plVar19 + 0x2e4) = 0x3f800000;
    *(undefined4 *)(*plVar19 + 0x2d8) = 0;
    *(undefined4 *)(*plVar19 + 0x2dc) = 0;
    *(undefined4 *)(*plVar19 + 0x2e8) = 0;
    *(undefined4 *)(*plVar19 + 0x2ec) = 0;
    lVar11 = *plVar19;
    cVar7 = *(char *)(lVar11 + 0xa63);
  }
  else {
    cVar7 = *(char *)(lVar11 + 0xa63);
  }
  if (cVar7 == '\0') {
    *(undefined4 *)(lVar11 + 0x330) = 0x3f800000;
    *(undefined4 *)(*plVar19 + 0x334) = 0x3f800000;
    *(undefined4 *)(*plVar19 + 0x328) = 0;
    *(undefined4 *)(*plVar19 + 0x32c) = 0;
    *(undefined4 *)(*plVar19 + 0x338) = 0;
    *(undefined4 *)(*plVar19 + 0x33c) = 0;
    lVar11 = *plVar19;
    cVar7 = *(char *)(lVar11 + 0xa73);
  }
  else {
    cVar7 = *(char *)(lVar11 + 0xa73);
  }
  if (cVar7 == '\0') {
    *(undefined4 *)(lVar11 + 0x380) = 0x3f800000;
    *(undefined4 *)(*plVar19 + 900) = 0x3f800000;
    *(undefined4 *)(*plVar19 + 0x378) = 0;
    *(undefined4 *)(*plVar19 + 0x37c) = 0;
    *(undefined4 *)(*plVar19 + 0x388) = 0;
    *(undefined4 *)(*plVar19 + 0x38c) = 0;
    lVar11 = *plVar19;
    cVar7 = *(char *)(lVar11 + 0x8b0);
  }
  else {
    cVar7 = *(char *)(lVar11 + 0x8b0);
  }
  if (cVar7 == '\0') {
    *(undefined4 *)(lVar11 + 0x700) = 0;
    *(undefined4 *)(*plVar19 + 0x710) = 0;
    *(undefined4 *)(*plVar19 + 0x720) = 0;
    *(undefined4 *)(*plVar19 + 0x730) = 0;
    lVar11 = *plVar19;
    cVar7 = *(char *)(lVar11 + 0x8b1);
  }
  else {
    cVar7 = *(char *)(lVar11 + 0x8b1);
  }
  if (cVar7 == '\0') {
    *(undefined4 *)(lVar11 + 0x704) = 0;
    *(undefined4 *)(*plVar19 + 0x714) = 0;
    *(undefined4 *)(*plVar19 + 0x724) = 0;
    *(undefined4 *)(*plVar19 + 0x734) = 0;
    lVar11 = *plVar19;
    cVar7 = *(char *)(lVar11 + 0x8b2);
  }
  else {
    cVar7 = *(char *)(lVar11 + 0x8b2);
  }
  if (cVar7 == '\0') {
    *(undefined4 *)(lVar11 + 0x708) = 0;
    *(undefined4 *)(*plVar19 + 0x718) = 0;
    *(undefined4 *)(*plVar19 + 0x728) = 0;
    *(undefined4 *)(*plVar19 + 0x738) = 0;
    lVar11 = *plVar19;
    cVar7 = *(char *)(lVar11 + 0xa50);
  }
  else {
    cVar7 = *(char *)(lVar11 + 0xa50);
  }
  if ((cVar7 == '\x05') &&
     (lVar11 = FUN_00279418(param_2,*(undefined8 *)(lVar11 + 0x9f0)), lVar11 != 0)) {
    *(float *)(*plVar19 + 0x110) = (float)*(int *)(lVar11 + 0x30);
    lVar11 = *plVar19;
    cVar7 = *(char *)(lVar11 + 0xa60);
  }
  else {
    lVar11 = *plVar19;
    cVar7 = *(char *)(lVar11 + 0xa60);
  }
  if ((cVar7 == '\x05') &&
     (lVar11 = FUN_00279418(param_2,*(undefined8 *)(lVar11 + 0xa10)), lVar11 != 0)) {
    *(float *)(*plVar19 + 0x1a0) = (float)*(int *)(lVar11 + 0x30);
  }
  if ((*(char *)(*plVar19 + 0xa70) == '\x05') &&
     (lVar11 = FUN_00279418(param_2,*(undefined8 *)(*plVar19 + 0xa30)), lVar11 != 0)) {
    *(float *)(*plVar19 + 0x230) = (float)*(int *)(lVar11 + 0x30);
  }
  lVar11 = *plVar19;
  iVar13 = *(int *)(lVar11 + 0x60);
  if (iVar13 - 1U < 7) {
    lVar17 = (long)iVar13;
    lVar12 = lVar17 * 0x10 + 0x3c0;
    iVar18 = iVar13;
    while( true ) {
      lVar17 = lVar17 + 1;
      lVar1 = lVar11 + (long)iVar18 * 0x10;
      uVar10 = *(undefined8 *)(lVar1 + 0x3b8);
      *(undefined8 *)(lVar11 + lVar12) = *(undefined8 *)(lVar1 + 0x3b0);
      ((undefined8 *)(lVar11 + lVar12))[1] = uVar10;
      *(float *)(*plVar19 + lVar12 + 0xc) = *(float *)(*plVar19 + lVar12 + 0xc) + (float)iVar13;
      lVar11 = *plVar19;
      if (7 < lVar17) break;
      iVar18 = *(int *)(lVar11 + 0x60);
      iVar13 = iVar13 + 1;
      lVar12 = lVar12 + 0x10;
    }
  }
  iVar13 = *(int *)(lVar11 + 0x68);
  if (iVar13 - 1U < 7) {
    lVar17 = (long)iVar13;
    lVar12 = lVar17 * 0x10 + 0x4c0;
    iVar18 = iVar13;
    while( true ) {
      lVar17 = lVar17 + 1;
      lVar1 = lVar11 + (long)iVar18 * 0x10;
      uVar10 = *(undefined8 *)(lVar1 + 0x4b8);
      *(undefined8 *)(lVar11 + lVar12) = *(undefined8 *)(lVar1 + 0x4b0);
      ((undefined8 *)(lVar11 + lVar12))[1] = uVar10;
      *(float *)(*plVar19 + lVar12 + 0xc) = *(float *)(*plVar19 + lVar12 + 0xc) + (float)iVar13;
      lVar11 = *plVar19;
      if (7 < lVar17) break;
      iVar18 = *(int *)(lVar11 + 0x68);
      iVar13 = iVar13 + 1;
      lVar12 = lVar12 + 0x10;
    }
  }
  iVar13 = *(int *)(lVar11 + 100);
  if (iVar13 - 1U < 7) {
    lVar17 = (long)iVar13;
    lVar12 = lVar17 * 0x10 + 0x440;
    iVar18 = iVar13;
    while( true ) {
      lVar17 = lVar17 + 1;
      lVar1 = lVar11 + (long)iVar18 * 0x10;
      uVar10 = *(undefined8 *)(lVar1 + 0x438);
      *(undefined8 *)(lVar11 + lVar12) = *(undefined8 *)(lVar1 + 0x430);
      ((undefined8 *)(lVar11 + lVar12))[1] = uVar10;
      *(float *)(*plVar19 + lVar12 + 0xc) = *(float *)(*plVar19 + lVar12 + 0xc) + (float)iVar13;
      lVar11 = *plVar19;
      if (7 < lVar17) break;
      iVar18 = *(int *)(lVar11 + 100);
      iVar13 = iVar13 + 1;
      lVar12 = lVar12 + 0x10;
    }
  }
  iVar13 = *(int *)(lVar11 + 0x6c);
  if (iVar13 - 1U < 7) {
    lVar17 = (long)iVar13;
    lVar12 = lVar17 * 0x10 + 0x540;
    iVar18 = iVar13;
    while( true ) {
      lVar17 = lVar17 + 1;
      lVar1 = lVar11 + (long)iVar18 * 0x10;
      uVar10 = *(undefined8 *)(lVar1 + 0x538);
      *(undefined8 *)(lVar11 + lVar12) = *(undefined8 *)(lVar1 + 0x530);
      ((undefined8 *)(lVar11 + lVar12))[1] = uVar10;
      *(float *)(*plVar19 + lVar12 + 0xc) = *(float *)(*plVar19 + lVar12 + 0xc) + (float)iVar13;
      lVar11 = *plVar19;
      if (7 < lVar17) break;
      iVar18 = *(int *)(lVar11 + 0x6c);
      iVar13 = iVar13 + 1;
      lVar12 = lVar12 + 0x10;
    }
  }
  iVar13 = *(int *)(lVar11 + 0x70);
  if (iVar13 - 1U < 7) {
    lVar17 = (long)iVar13;
    lVar12 = lVar17 * 0x10 + 0x600;
    iVar18 = iVar13;
    while( true ) {
      lVar17 = lVar17 + 1;
      lVar1 = lVar11 + (long)iVar18 * 0x10;
      uVar10 = *(undefined8 *)(lVar1 + 0x5f8);
      *(undefined8 *)(lVar11 + lVar12) = *(undefined8 *)(lVar1 + 0x5f0);
      ((undefined8 *)(lVar11 + lVar12))[1] = uVar10;
      *(float *)(*plVar19 + lVar12 + 0xc) = *(float *)(*plVar19 + lVar12 + 0xc) + (float)iVar13;
      lVar11 = *plVar19;
      if (7 < lVar17) break;
      iVar18 = *(int *)(lVar11 + 0x70);
      iVar13 = iVar13 + 1;
      lVar12 = lVar12 + 0x10;
    }
  }
  iVar13 = *(int *)(lVar11 + 0x74);
  if (iVar13 - 1U < 7) {
    lVar17 = (long)iVar13;
    lVar12 = lVar17 * 0x10 + 0x680;
    iVar18 = iVar13;
    while( true ) {
      lVar17 = lVar17 + 1;
      lVar1 = lVar11 + (long)iVar18 * 0x10;
      uVar10 = *(undefined8 *)(lVar1 + 0x678);
      *(undefined8 *)(lVar11 + lVar12) = *(undefined8 *)(lVar1 + 0x670);
      ((undefined8 *)(lVar11 + lVar12))[1] = uVar10;
      *(float *)(*plVar19 + lVar12 + 0xc) = *(float *)(*plVar19 + lVar12 + 0xc) + (float)iVar13;
      lVar11 = *plVar19;
      if (7 < lVar17) break;
      iVar18 = *(int *)(lVar11 + 0x74);
      iVar13 = iVar13 + 1;
      lVar12 = lVar12 + 0x10;
    }
  }
  fVar30 = 0.0;
  fVar27 = 0.0;
  if (*(char *)(lVar11 + 0x8d8) != '\0') {
    fVar27 = (float)*(int *)(lVar11 + 0x8e4);
  }
  *(float *)(lVar11 + 0x80) = fVar27;
  fVar31 = 1.0;
  fVar27 = fVar30;
  if (*(char *)(*plVar19 + 0x8dd) != '\0') {
    fVar27 = fVar31;
  }
  *(float *)(*plVar19 + 0x94) = fVar27;
  lVar11 = *plVar19;
  fVar27 = fVar30;
  if (*(char *)(lVar11 + 0x8d9) != '\0') {
    fVar27 = (float)*(int *)(lVar11 + 0x8e8);
  }
  *(float *)(lVar11 + 0x84) = fVar27;
  fVar27 = fVar30;
  if (*(char *)(*plVar19 + 0x8de) != '\0') {
    fVar27 = fVar31;
  }
  *(float *)(*plVar19 + 0x98) = fVar27;
  lVar11 = *plVar19;
  fVar27 = fVar30;
  if (*(char *)(lVar11 + 0x8da) != '\0') {
    fVar27 = (float)*(int *)(lVar11 + 0x8ec);
  }
  *(float *)(lVar11 + 0x88) = fVar27;
  fVar27 = fVar30;
  if (*(char *)(*plVar19 + 0x8df) != '\0') {
    fVar27 = fVar31;
  }
  *(float *)(*plVar19 + 0x9c) = fVar27;
  lVar11 = *plVar19;
  fVar27 = fVar30;
  if (*(char *)(lVar11 + 0x8db) != '\0') {
    fVar27 = (float)*(int *)(lVar11 + 0x8f0);
  }
  *(float *)(lVar11 + 0x8c) = fVar27;
  fVar27 = fVar30;
  if (*(char *)(*plVar19 + 0x8e0) != '\0') {
    fVar27 = fVar31;
  }
  *(float *)(*plVar19 + 0xa0) = fVar27;
  lVar11 = *plVar19;
  if (*(char *)(lVar11 + 0x8dc) != '\0') {
    fVar30 = (float)*(int *)(lVar11 + 0x8f4);
  }
  *(float *)(lVar11 + 0x90) = fVar30;
  uVar22 = 0;
  if (*(char *)(*plVar19 + 0x8e1) != '\0') {
    uVar22 = 0x3f800000;
  }
  *(undefined4 *)(*plVar19 + 0xa4) = uVar22;
  bVar8 = *(byte *)(*plVar19 + 0x838);
  if ((0xf < bVar8) || (uVar21 = (uint)bVar8, (1 << (ulong)(uVar21 & 0x1f) & 0xa064U) == 0)) {
    *(undefined4 *)(*plVar19 + 0x874) = 0xffffffff;
    uVar21 = (uint)*(byte *)(*plVar19 + 0x838);
  }
  if (uVar21 - 2 < 0xe) {
                    /* WARNING: Could not recover jumptable at 0x00268270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_00268274 + (ulong)(byte)(&DAT_039d0118)[uVar21 - 2] * 4))();
    return;
  }
  local_28 = 0;
  FUN_00268a38(&local_28,param_1);
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x50) = (undefined4)local_28;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x54) = local_28._4_4_;
  if (*(undefined4 **)(param_1 + 0x288) != (undefined4 *)0x0) {
    *(undefined4 *)(*plVar19 + 0x5c) = **(undefined4 **)(param_1 + 0x288);
  }
  lVar12 = *(long *)(param_1 + 0x10);
  uVar10 = *(undefined8 *)*(undefined1 (*) [12])(lVar12 + 0x788);
  auVar9 = *(undefined1 (*) [12])(lVar12 + 0x788);
  fVar27 = *(float *)PTR_Float1Divided2Pi_04372d20;
  fVar30 = *(float *)(PTR_SinCoefficients_04372d28 + 4);
  fVar20 = (float)uVar10;
  fVar31 = fVar20 * fVar27;
  fVar37 = (float)((ulong)uVar10 >> 0x20) * fVar27;
  fVar39 = *(float *)(lVar12 + 0x790) * fVar27;
  fVar42 = *(float *)PTR_Float2Pi_04372d30;
  auVar35._0_4_ = (int)(fVar31 + (float)(-(uint)(0.0 <= fVar31) & 0x80000000 ^ 0xbf000000));
  auVar35._4_4_ = (int)(fVar37 + (float)(-(uint)(0.0 <= fVar37) & 0x80000000 ^ 0xbf000000));
  auVar35._8_4_ = (int)(fVar39 + (float)(-(uint)(0.0 <= fVar39) & 0x80000000 ^ 0xbf000000));
  auVar35._12_4_ =
       (int)(fVar27 * 0.0 + (float)(-(uint)(0.0 <= fVar27 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar33 = NEON_scvtf(auVar35,4);
  fVar20 = fVar20 - auVar33._0_4_ * fVar42;
  fVar39 = auVar9._4_4_ - auVar33._4_4_ * fVar42;
  fVar24 = auVar9._8_4_ - auVar33._8_4_ * fVar42;
  fVar42 = 0.0 - auVar33._12_4_ * fVar42;
  fVar27 = *(float *)PTR_FloatPiDivided2_04372d38;
  fVar37 = *(float *)PTR_FloatPi_04372cf0;
  fVar49 = -fVar37;
  fVar31 = -fVar27;
  uVar32 = -(uint)(fVar27 < fVar20);
  uVar38 = -(uint)(fVar27 < fVar39);
  uVar40 = -(uint)(fVar27 < fVar24);
  uVar41 = -(uint)(fVar27 < fVar42);
  lVar11 = *(long *)(param_1 + 0x28);
  fVar51 = *(float *)PTR_SinCoefficients_04372d28;
  fVar20 = (float)((uint)fVar20 ^ ((uint)fVar20 ^ (uint)(fVar37 - fVar20)) & uVar32);
  fVar39 = (float)((uint)fVar39 ^ ((uint)fVar39 ^ (uint)(fVar37 - fVar39)) & uVar38);
  fVar24 = (float)((uint)fVar24 ^ ((uint)fVar24 ^ (uint)(fVar37 - fVar24)) & uVar40);
  fVar42 = (float)((uint)fVar42 ^ ((uint)fVar42 ^ (uint)(fVar37 - fVar42)) & uVar41);
  fVar50 = -*(float *)(PTR_CosCoefficients_04372d40 + 8);
  uVar21 = -(uint)(fVar20 < fVar31);
  uVar23 = -(uint)(fVar39 < fVar31);
  uVar25 = -(uint)(fVar24 < fVar31);
  uVar26 = -(uint)(fVar42 < fVar31);
  auVar34[0] = (byte)uVar21 | (byte)uVar32;
  auVar34[1] = (byte)(uVar21 >> 8) | (byte)(uVar32 >> 8);
  auVar34[2] = (byte)(uVar21 >> 0x10) | (byte)(uVar32 >> 0x10);
  auVar34[3] = (byte)(uVar21 >> 0x18) | (byte)(uVar32 >> 0x18);
  auVar34[4] = (byte)uVar23 | (byte)uVar38;
  auVar34[5] = (byte)(uVar23 >> 8) | (byte)(uVar38 >> 8);
  auVar34[6] = (byte)(uVar23 >> 0x10) | (byte)(uVar38 >> 0x10);
  auVar34[7] = (byte)(uVar23 >> 0x18) | (byte)(uVar38 >> 0x18);
  auVar34[8] = (byte)uVar25 | (byte)uVar40;
  auVar34[9] = (byte)(uVar25 >> 8) | (byte)(uVar40 >> 8);
  auVar34[10] = (byte)(uVar25 >> 0x10) | (byte)(uVar40 >> 0x10);
  auVar34[0xb] = (byte)(uVar25 >> 0x18) | (byte)(uVar40 >> 0x18);
  auVar34[0xc] = (byte)uVar26 | (byte)uVar41;
  auVar34[0xd] = (byte)(uVar26 >> 8) | (byte)(uVar41 >> 8);
  auVar34[0xe] = (byte)(uVar26 >> 0x10) | (byte)(uVar41 >> 0x10);
  auVar34[0xf] = (byte)(uVar26 >> 0x18) | (byte)(uVar41 >> 0x18);
  fVar27 = *(float *)(PTR_SinCoefficients_04372d28 + 0xc);
  fVar31 = *(float *)(PTR_CosCoefficients_04372d40 + 4);
  fVar20 = (float)((uint)fVar20 ^ ((uint)fVar20 ^ (uint)(fVar49 - fVar20)) & uVar21);
  fVar39 = (float)((uint)fVar39 ^ ((uint)fVar39 ^ (uint)(fVar49 - fVar39)) & uVar23);
  fVar24 = (float)((uint)fVar24 ^ ((uint)fVar24 ^ (uint)(fVar49 - fVar24)) & uVar25);
  fVar42 = (float)((uint)fVar42 ^ ((uint)fVar42 ^ (uint)(fVar49 - fVar42)) & uVar26);
  fVar43 = *(float *)PTR_CosCoefficients_04372d40;
  fVar44 = fVar20 * fVar20;
  fVar45 = fVar39 * fVar39;
  fVar46 = fVar24 * fVar24;
  fVar48 = fVar42 * fVar42;
  fVar53 = -*(float *)(PTR_SinCoefficients_04372d28 + 8);
  fVar37 = *(float *)(PTR_CosCoefficients_04372d40 + 0xc);
  fVar52 = -*(float *)(PTR_SinCoefficients_04372d28 + 0x10);
  fVar49 = -*(float *)(PTR_CosCoefficients_04372d40 + 0x10);
  auVar28 = NEON_fmov(0x3f800000,4);
  auVar33 = NEON_fmov(0xbf800000,4);
  auVar35 = auVar28 ^ (auVar28 ^ auVar33) & auVar34;
  auVar33._0_4_ =
       fVar20 * (auVar28._0_4_ +
                fVar44 * (fVar52 + fVar44 * (fVar27 + fVar44 * (fVar53 + fVar44 * (fVar30 - fVar44 *
                                                                                            fVar51))
                                            )));
  auVar33._4_4_ =
       fVar39 * (auVar28._4_4_ +
                fVar45 * (fVar52 + fVar45 * (fVar27 + fVar45 * (fVar53 + fVar45 * (fVar30 - fVar45 *
                                                                                            fVar51))
                                            )));
  auVar33._8_4_ =
       fVar24 * (auVar28._8_4_ +
                fVar46 * (fVar52 + fVar46 * (fVar27 + fVar46 * (fVar53 + fVar46 * (fVar30 - fVar46 *
                                                                                            fVar51))
                                            )));
  auVar33._12_4_ =
       fVar42 * (auVar28._12_4_ +
                fVar48 * (fVar52 + fVar48 * (fVar27 + fVar48 * (fVar53 + fVar48 * (fVar30 - fVar48 *
                                                                                            fVar51))
                                            )));
  auVar29._0_4_ =
       auVar35._0_4_ *
       (auVar28._0_4_ +
       fVar44 * (fVar49 + fVar44 * (fVar37 + fVar44 * (fVar50 + fVar44 * (fVar31 - fVar44 * fVar43))
                                   )));
  auVar29._4_4_ =
       auVar35._4_4_ *
       (auVar28._4_4_ +
       fVar45 * (fVar49 + fVar45 * (fVar37 + fVar45 * (fVar50 + fVar45 * (fVar31 - fVar45 * fVar43))
                                   )));
  auVar29._8_4_ =
       auVar35._8_4_ *
       (auVar28._8_4_ +
       fVar46 * (fVar49 + fVar46 * (fVar37 + fVar46 * (fVar50 + fVar46 * (fVar31 - fVar46 * fVar43))
                                   )));
  auVar29._12_4_ =
       auVar35._12_4_ *
       (auVar28._12_4_ +
       fVar48 * (fVar49 + fVar48 * (fVar37 + fVar48 * (fVar50 + fVar48 * (fVar31 - fVar48 * fVar43))
                                   )));
  auVar28 = NEON_ext(auVar33,auVar33,8,1);
  auVar35 = NEON_ext(auVar29,auVar29,8,1);
  fVar27 = auVar35._0_4_;
  fVar31 = auVar28._0_4_;
  fVar43 = auVar29._4_4_ * (float)DAT_0388a618;
  fVar44 = (float)((ulong)DAT_0388a618 >> 0x20) * 0.0;
  fVar46 = auVar33._4_4_ * (float)DAT_0388a870;
  fVar48 = (float)((ulong)DAT_0388a870 >> 0x20) * 0.0;
  auVar9 = *(undefined1 (*) [12])(lVar12 + 0x770);
  fVar30 = *(float *)(lVar12 + 0x7a8);
  fVar37 = fVar31 * auVar29._0_4_ * (float)_DAT_03889200 + fVar27 * auVar33._4_4_ * auVar33._0_4_;
  fVar20 = fVar27 * auVar29._0_4_ * (float)((ulong)_DAT_03889200 >> 0x20) +
           fVar31 * auVar33._4_4_ * auVar33._0_4_;
  fVar39 = auVar29._0_4_ * 0.0 * (float)_UNK_03889208 + fVar43 * auVar33._0_4_;
  fVar24 = auVar29._0_4_ * 0.0 * (float)((ulong)_UNK_03889208 >> 0x20) + fVar44 * auVar33._0_4_;
  fVar42 = (float)*(undefined8 *)(lVar12 + 0x7a0);
  auVar36._0_8_ = CONCAT44(fVar31 * auVar29._4_4_ * fVar42,fVar27 * auVar29._4_4_ * fVar42);
  auVar36._8_4_ = fVar46 * fVar42;
  auVar36._12_4_ = fVar48 * fVar42;
  fVar42 = fVar31 * auVar33._0_4_ * (float)_DAT_03889d50 + fVar27 * auVar33._4_4_ * auVar29._0_4_;
  fVar49 = fVar27 * auVar33._0_4_ * (float)((ulong)_DAT_03889d50 >> 0x20) +
           fVar31 * auVar33._4_4_ * auVar29._0_4_;
  fVar43 = auVar33._0_4_ * 0.0 * (float)_UNK_03889d58 + fVar43 * auVar29._0_4_;
  fVar44 = auVar33._0_4_ * 0.0 * (float)((ulong)_UNK_03889d58 >> 0x20) + fVar44 * auVar29._0_4_;
  fVar45 = (float)((ulong)*(undefined8 *)(lVar12 + 0x7a0) >> 0x20);
  *(ulong *)(param_1 + 0x208) = CONCAT44(fVar48,fVar46);
  *(ulong *)(param_1 + 0x200) = CONCAT44(fVar31 * auVar29._4_4_,fVar27 * auVar29._4_4_);
  *(float *)(param_1 + 0x218) = fVar39;
  *(float *)(param_1 + 0x21c) = fVar24;
  *(float *)(param_1 + 0x210) = fVar37;
  *(float *)(param_1 + 0x214) = fVar20;
  auVar28._0_8_ = CONCAT44(fVar49 * fVar30,fVar42 * fVar30);
  auVar28._8_4_ = fVar43 * fVar30;
  auVar28._12_4_ = fVar44 * fVar30;
  *(float *)(param_1 + 0x228) = fVar43;
  *(float *)(param_1 + 0x22c) = fVar44;
  *(float *)(param_1 + 0x220) = fVar42;
  *(float *)(param_1 + 0x224) = fVar49;
  uVar47 = (ulong)auVar9._8_4_;
  *(ulong *)(param_1 + 0x238) = uVar47;
  uVar10 = auVar9._0_8_;
  *(undefined8 *)(param_1 + 0x230) = uVar10;
  *(long *)(param_1 + 0x1c8) = auVar36._8_8_;
  *(undefined8 *)(param_1 + 0x1c0) = auVar36._0_8_;
  *(ulong *)(param_1 + 0x1d8) = CONCAT44(fVar24 * fVar45,fVar39 * fVar45);
  *(ulong *)(param_1 + 0x1d0) = CONCAT44(fVar20 * fVar45,fVar37 * fVar45);
  *(long *)(param_1 + 0x1e8) = auVar28._8_8_;
  *(undefined8 *)(param_1 + 0x1e0) = auVar28._0_8_;
  *(ulong *)(param_1 + 0x1f8) = uVar47;
  *(undefined8 *)(param_1 + 0x1f0) = uVar10;
  uVar10 = *(undefined8 *)(lVar12 + 0x700);
  *(ulong *)(param_1 + 0x328) = (ulong)*(uint *)(lVar12 + 0x708);
  *(undefined8 *)(param_1 + 800) = uVar10;
  lVar12 = FUN_008773dc(*(undefined8 *)(param_1 + 0x20));
  pvVar2 = (void *)(lVar12 + lVar11);
  if (pvVar2 != (void *)0x0) {
    memcpy(pvVar2,*(void **)(param_1 + 0x10),0x750);
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    FUN_008773f4(uVar10,*(undefined8 *)(param_1 + 0x28),0x750);
    FUN_008773f0(uVar10);
  }
  if (*(long *)(param_1 + 0x338) != 0) {
    lVar12 = *(long *)(param_1 + 0x30);
    lVar11 = FUN_008773dc(*(undefined8 *)(param_1 + 0x20));
    puVar3 = (undefined8 *)(lVar11 + lVar12);
    if (puVar3 != (undefined8 *)0x0) {
      puVar14 = *(undefined8 **)(param_1 + 0x338);
      uVar10 = *puVar14;
      uVar5 = puVar14[1];
      uVar6 = puVar14[3];
      puVar3[2] = puVar14[2];
      puVar3[3] = uVar6;
      *puVar3 = uVar10;
      puVar3[1] = uVar5;
      uVar10 = puVar14[4];
      uVar5 = puVar14[5];
      uVar6 = puVar14[7];
      puVar3[6] = puVar14[6];
      puVar3[7] = uVar6;
      puVar3[4] = uVar10;
      puVar3[5] = uVar5;
      uVar10 = puVar14[8];
      uVar5 = puVar14[9];
      uVar6 = puVar14[0xb];
      puVar3[10] = puVar14[10];
      puVar3[0xb] = uVar6;
      puVar3[8] = uVar10;
      puVar3[9] = uVar5;
      uVar10 = puVar14[0xc];
      uVar5 = puVar14[0xd];
      uVar6 = puVar14[0xf];
      puVar3[0xe] = puVar14[0xe];
      puVar3[0xf] = uVar6;
      puVar3[0xc] = uVar10;
      puVar3[0xd] = uVar5;
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      FUN_008773f4(uVar10,*(undefined8 *)(param_1 + 0x30),0x80);
      FUN_008773f0(uVar10);
    }
  }
  if (*(long *)(param_1 + 0x300) != 0) {
    lVar12 = *(long *)(param_1 + 0x38);
    lVar11 = FUN_008773dc(*(undefined8 *)(param_1 + 0x20));
    pvVar2 = (void *)(lVar11 + lVar12);
    if (pvVar2 != (void *)0x0) {
      memcpy(pvVar2,*(void **)(param_1 + 0x300),*(size_t *)(param_1 + 0x308));
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      FUN_008773f4(uVar10,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x308));
      FUN_008773f0(uVar10);
    }
  }
  if (*(char *)(param_1 + 3) != '\0') {
    lVar12 = *(long *)(param_1 + 0x40);
    lVar11 = FUN_008773dc(*(undefined8 *)(param_1 + 0x20));
    puVar4 = (undefined4 *)(lVar11 + lVar12);
    if (puVar4 != (undefined4 *)0x0) {
      lVar11 = *(long *)(param_1 + 0x248);
      if (lVar11 != 0) {
        *puVar4 = *(undefined4 *)(lVar11 + 4);
        puVar4[1] = *(undefined4 *)(lVar11 + 8);
        puVar4[2] = *(undefined4 *)(lVar11 + 0xc);
        puVar4[3] = (float)*(int *)(*(long *)(param_1 + 0x248) + 0x10);
        puVar4[4] = *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x2c);
        puVar4[5] = *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x30);
        puVar4[6] = *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x34);
        puVar4[7] = *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x38);
        puVar4[8] = *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x1c);
        puVar4[9] = *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x20);
        puVar4[10] = *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x24);
        puVar4[0xb] = *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x28);
        uVar22 = NEON_ucvtf((uint)**(byte **)(param_1 + 0x248));
        puVar4[0xc] = uVar22;
        uVar22 = NEON_ucvtf((uint)*(byte *)(*(long *)(param_1 + 0x248) + 1));
        puVar4[0xd] = uVar22;
        uVar22 = NEON_ucvtf((uint)*(byte *)(*(long *)(param_1 + 0x248) + 2));
        puVar4[0xe] = uVar22;
        puVar4[0x10] = *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x14);
        puVar4[0x11] = *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x18);
      }
      puVar15 = *(undefined4 **)(param_1 + 0x250);
      if (puVar15 != (undefined4 *)0x0) {
        puVar4[0x14] = *puVar15;
        puVar4[0x15] = puVar15[1];
        puVar4[0x16] = puVar15[2];
        puVar4[0x17] = (float)*(int *)(*(long *)(param_1 + 0x250) + 0xc);
      }
      lVar11 = *(long *)(param_1 + 0x278);
      if (lVar11 != 0) {
        puVar4[0x18] = *(undefined4 *)(lVar11 + 4);
        puVar4[0x19] = *(undefined4 *)(lVar11 + 8);
        puVar4[0x1a] = *(undefined4 *)(lVar11 + 0xc);
        uVar22 = NEON_ucvtf((uint)**(byte **)(param_1 + 0x278));
        puVar4[0x1b] = uVar22;
      }
      lVar11 = *(long *)(param_1 + 600);
      if (lVar11 != 0) {
        puVar4[0x1c] = *(undefined4 *)(lVar11 + 8);
        puVar4[0x1d] = *(undefined4 *)(lVar11 + 0xc);
        puVar4[0x1e] = *(undefined4 *)(lVar11 + 0x10);
        puVar4[0x1f] = *(undefined4 *)(*(long *)(param_1 + 600) + 4);
        uVar22 = NEON_ucvtf((uint)**(byte **)(param_1 + 600));
        puVar4[0x20] = uVar22;
        uVar22 = NEON_ucvtf((uint)*(byte *)(*(long *)(param_1 + 600) + 1));
        puVar4[0x21] = uVar22;
        uVar22 = NEON_ucvtf((uint)*(byte *)(*(long *)(param_1 + 600) + 2));
        puVar4[0x22] = uVar22;
        uVar22 = NEON_ucvtf((uint)*(byte *)(*(long *)(param_1 + 600) + 3));
        puVar4[0x23] = uVar22;
      }
      lVar11 = *(long *)(param_1 + 0x270);
      if (lVar11 != 0) {
        puVar4[0x24] = *(undefined4 *)(lVar11 + 4);
        puVar4[0x25] = *(undefined4 *)(lVar11 + 8);
        puVar4[0x26] = *(undefined4 *)(lVar11 + 0xc);
        puVar4[0x27] = *(undefined4 *)(*(long *)(param_1 + 0x270) + 0x10);
        uVar22 = NEON_ucvtf((uint)**(byte **)(param_1 + 0x270));
        puVar4[0x28] = uVar22;
      }
      if (*(undefined4 **)(param_1 + 0x260) != (undefined4 *)0x0) {
        puVar4[0x2c] = **(undefined4 **)(param_1 + 0x260);
        puVar4[0x2d] = *(undefined4 *)(*(long *)(param_1 + 0x260) + 8);
        uVar22 = NEON_ucvtf(*(undefined4 *)(*(long *)(param_1 + 0x260) + 4));
        puVar4[0x2e] = uVar22;
      }
      pbVar16 = *(byte **)(param_1 + 0x268);
      if (pbVar16 != (byte *)0x0) {
        fVar30 = (float)NEON_ucvtf((uint)pbVar16[1]);
        puVar4[0x30] = fVar30 + (float)((uint)*pbVar16 << 1);
        puVar4[0x31] = *(undefined4 *)(*(long *)(param_1 + 0x268) + 8);
        puVar4[0x32] = *(undefined4 *)(*(long *)(param_1 + 0x268) + 0x10);
        puVar4[0x33] = *(undefined4 *)(*(long *)(param_1 + 0x268) + 4);
      }
      lVar11 = *(long *)(param_1 + 0x280);
      if (lVar11 != 0) {
        puVar4[0x34] = *(undefined4 *)(lVar11 + 0x10);
        puVar4[0x35] = *(undefined4 *)(lVar11 + 0x14);
        puVar4[0x36] = *(undefined4 *)(lVar11 + 0x18);
        puVar4[0x37] = *(undefined4 *)(*(long *)(param_1 + 0x280) + 0x1c);
        lVar11 = *(long *)(param_1 + 0x280);
        puVar4[0x38] = *(undefined4 *)(lVar11 + 4);
        puVar4[0x39] = *(undefined4 *)(lVar11 + 8);
        puVar4[0x3a] = *(undefined4 *)(lVar11 + 0xc);
        puVar4[0x3b] = *(undefined4 *)(*(long *)(param_1 + 0x280) + 0x20);
        uVar22 = NEON_ucvtf((uint)*(byte *)(*(long *)(param_1 + 0x280) + 1));
        puVar4[0x3c] = uVar22;
        uVar22 = NEON_ucvtf((uint)*(byte *)(*(long *)(param_1 + 0x280) + 2));
        puVar4[0x3d] = uVar22;
      }
      if (*(long *)(param_1 + 0x288) != 0) {
        puVar4[0x40] = *(undefined4 *)(*(long *)(param_1 + 0x288) + 4);
        puVar4[0x41] = *(undefined4 *)(*(long *)(param_1 + 0x288) + 8);
        puVar4[0x42] = *(undefined4 *)(*(long *)(param_1 + 0x288) + 0xc);
        puVar4[0x43] = *(undefined4 *)(*(long *)(param_1 + 0x288) + 0x10);
        puVar4[0x44] = *(undefined4 *)(*(long *)(param_1 + 0x288) + 0x14);
        puVar4[0x45] = *(undefined4 *)(*(long *)(param_1 + 0x288) + 0x18);
        puVar4[0x46] = *(undefined4 *)(*(long *)(param_1 + 0x288) + 0x1c);
        puVar4[0x47] = *(undefined4 *)(*(long *)(param_1 + 0x288) + 0x20);
      }
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      FUN_008773f4(uVar10,*(undefined8 *)(param_1 + 0x40),0x120);
      FUN_008773f0(uVar10);
    }
  }
  return;
}


