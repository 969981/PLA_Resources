/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006da8f0; name: FUN_006da8f0
 */


void FUN_006da8f0(long *param_1,char *param_2,long *param_3)

{
  long lVar1;
  ulong *puVar2;
  undefined8 uVar3;
  size_t __n;
  long lVar4;
  void *__dest;
  ulong uVar5;
  ulong local_98;
  size_t local_90;
  void *local_88;
  undefined1 auStack_80 [8];
  ulong local_78;
  undefined8 local_70;
  int local_64;
  long *local_60 [4];
  ulong *local_40;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    lVar1 = FUN_002e2e80(PTR_FUN_04373078,0x30);
    if (lVar1 != 0) {
                    /* try { // try from 006da92c to 006da937 has its CatchHandler @ 006daad0 */
      FUN_002e0ddc(lVar1,0);
    }
    *param_1 = lVar1;
  }
                    /* try { // try from 006da93c to 006da947 has its CatchHandler @ 006daad4 */
  FUN_002deb18(auStack_80,0);
  if (local_64 == 10) {
    lVar1 = *param_3;
    local_64 = 10;
    uVar3 = local_70;
  }
  else {
                    /* try { // try from 006da964 to 006da983 has its CatchHandler @ 006daad8 */
    FUN_002de8d8(auStack_80);
    local_64 = 10;
    puVar2 = (ulong *)(local_78 & 0xfffffffffffffffe);
    if ((local_78 & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    uVar3 = FUN_002e1a14(puVar2);
    lVar1 = *param_3;
  }
  local_70 = uVar3;
  if (lVar1 == 0) {
    lVar1 = FUN_002e2e80(PTR_FUN_04373078,0x30);
    if (lVar1 != 0) {
                    /* try { // try from 006da9ac to 006da9b7 has its CatchHandler @ 006daacc */
      FUN_002e0ddc(lVar1,0);
    }
    *param_3 = lVar1;
  }
                    /* try { // try from 006da9bc to 006da9c7 has its CatchHandler @ 006daad8 */
  FUN_002e1668(uVar3,lVar1);
  lVar1 = *param_1;
  local_98 = 0;
  local_90 = 0;
  local_88 = (void *)0x0;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 006daac0 to 006daac7 has its CatchHandler @ 006daac8 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_98 = CONCAT71(local_98._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_98 | 1);
    if (__n == 0) goto LAB_006daa40;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar5);
    local_98 = uVar5 | 1;
    local_90 = __n;
    local_88 = __dest;
  }
  memcpy(__dest,param_2,__n);
LAB_006daa40:
  *(undefined1 *)((long)__dest + __n) = 0;
  local_40 = &local_98;
  uStack_38 = 0;
                    /* try { // try from 006daa50 to 006daa83 has its CatchHandler @ 006daaec */
  FUN_00634d1c(local_60,*(undefined8 *)(lVar1 + 0x20),&local_40);
  lVar4 = local_60[0][1];
  if (lVar4 == 0) {
    lVar4 = FUN_00634be0(lVar1 + 0x10,&local_98);
    *local_60[0] = lVar4;
    local_60[0][1] = lVar4;
  }
  FUN_002e03d4(lVar4 + 0x18,auStack_80);
  if ((local_98 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_88);
  }
  FUN_002ded3c(auStack_80);
  return;
}


