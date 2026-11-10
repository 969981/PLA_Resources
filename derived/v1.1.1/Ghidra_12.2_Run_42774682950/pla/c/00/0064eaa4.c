/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0064eaa4; name: FUN_0064eaa4
 */


void FUN_0064eaa4(long *param_1,char *param_2,long *param_3)

{
  long lVar1;
  ulong *puVar2;
  undefined8 uVar3;
  size_t __n;
  long lVar4;
  void *__dest;
  ulong uVar5;
  ulong uStack_98;
  size_t sStack_90;
  void *pvStack_88;
  undefined1 auStack_80 [8];
  ulong uStack_78;
  undefined8 uStack_70;
  int iStack_64;
  long *aplStack_60 [4];
  ulong *puStack_40;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    lVar1 = FUN_002e2e80(PTR_FUN_04373078,0x30);
    if (lVar1 != 0) {
      FUN_002e0ddc(lVar1,0);
    }
    *param_1 = lVar1;
  }
  FUN_002deb18(auStack_80,0);
  if (iStack_64 == 10) {
    lVar1 = *param_3;
    iStack_64 = 10;
    uVar3 = uStack_70;
  }
  else {
    FUN_002de8d8(auStack_80);
    iStack_64 = 10;
    puVar2 = (ulong *)(uStack_78 & 0xfffffffffffffffe);
    if ((uStack_78 & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    uVar3 = FUN_002e1a14(puVar2);
    lVar1 = *param_3;
  }
  uStack_70 = uVar3;
  if (lVar1 == 0) {
    lVar1 = FUN_002e2e80(PTR_FUN_04373078,0x30);
    if (lVar1 != 0) {
      FUN_002e0ddc(lVar1,0);
    }
    *param_3 = lVar1;
  }
  FUN_002e1668(uVar3,lVar1);
  lVar1 = *param_1;
  uStack_98 = 0;
  sStack_90 = 0;
  pvStack_88 = (void *)0x0;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    uStack_98 = CONCAT71(uStack_98._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&uStack_98 | 1);
    if (__n == 0) goto LAB_006daa40;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar5);
    uStack_98 = uVar5 | 1;
    sStack_90 = __n;
    pvStack_88 = __dest;
  }
  memcpy(__dest,param_2,__n);
LAB_006daa40:
  *(undefined1 *)((long)__dest + __n) = 0;
  puStack_40 = &uStack_98;
  uStack_38 = 0;
  FUN_00634d1c(aplStack_60,*(undefined8 *)(lVar1 + 0x20),&puStack_40);
  lVar4 = aplStack_60[0][1];
  if (lVar4 == 0) {
    lVar4 = FUN_00634be0(lVar1 + 0x10,&uStack_98);
    *aplStack_60[0] = lVar4;
    aplStack_60[0][1] = lVar4;
  }
  FUN_002e03d4(lVar4 + 0x18,auStack_80);
  if ((uStack_98 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,pvStack_88);
  }
  FUN_002ded3c(auStack_80);
  return;
}


