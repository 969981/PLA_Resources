/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003780a4; name: FUN_003780a4
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_003780a4(long param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulong *puVar6;
  ulong uVar7;
  byte *pbVar8;
  void *__s1;
  byte *__s2;
  byte local_98 [16];
  undefined8 local_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  ulong local_60;
  ulong uStack_58;
  ulong local_50;
  ulong local_40;
  ulong uStack_38;
  ulong local_30;
  
  bVar3 = *(byte *)(param_1 + 0x30);
  uVar7 = (ulong)(bVar3 >> 1);
  __n = uVar7;
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x38);
  }
  bVar4 = *param_2;
  sVar1 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar1 = *(size_t *)(param_2 + 8);
  }
  if (__n != sVar1) {
LAB_00378140:
    FUN_0034b2f0(local_98,"Expected \"",param_2);
                    /* try { // try from 00378154 to 00378167 has its CatchHandler @ 00378338 */
    puVar6 = (ulong *)FUN_002e4094(local_98,"\", found \"",10);
    uStack_78 = puVar6[1];
    local_80 = *puVar6;
    local_70 = puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    uVar7 = *(ulong *)(param_1 + 0x38);
    lVar2 = *(long *)(param_1 + 0x40);
    if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      lVar2 = param_1 + 0x31;
      uVar7 = (ulong)(*(byte *)(param_1 + 0x30) >> 1);
    }
                    /* try { // try from 00378198 to 0037819f has its CatchHandler @ 00378310 */
    puVar6 = (ulong *)FUN_002e4094(&local_80,lVar2,uVar7);
    uStack_58 = puVar6[1];
    local_60 = *puVar6;
    local_50 = puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
                    /* try { // try from 003781b8 to 003781cb has its CatchHandler @ 003782e8 */
    puVar6 = (ulong *)FUN_002e4094(&local_60,&DAT_038c838e,2);
    uStack_38 = puVar6[1];
    local_40 = *puVar6;
    local_30 = puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
                    /* try { // try from 003781e8 to 003781f3 has its CatchHandler @ 003782a0 */
    FUN_0037196c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_40);
    if ((local_40 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_30);
    }
    if ((local_60 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_50);
    }
    if ((local_80 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_70);
    }
    if ((local_98[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_88);
    }
    return 0;
  }
  __s1 = *(void **)(param_1 + 0x40);
  if ((bVar3 & 1) == 0) {
    __s1 = (void *)(param_1 + 0x31);
  }
  __s2 = *(byte **)(param_2 + 0x10);
  if ((bVar4 & 1) == 0) {
    __s2 = param_2 + 1;
  }
  if ((bVar3 & 1) == 0) {
    if (__n != 0) {
      pbVar8 = (byte *)(param_1 + 0x31);
      do {
        if (*pbVar8 != *__s2) goto LAB_00378140;
        uVar7 = uVar7 - 1;
        pbVar8 = pbVar8 + 1;
        __s2 = __s2 + 1;
      } while (uVar7 != 0);
    }
  }
  else if ((__n != 0) && (iVar5 = memcmp(__s1,__s2,__n), iVar5 != 0)) goto LAB_00378140;
  FUN_003a0640(param_1 + 0x28);
  return 1;
}


