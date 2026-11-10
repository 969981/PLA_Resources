/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006da41c; name: FUN_006da41c
 */


void FUN_006da41c(long *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  size_t __n;
  long lVar2;
  void *__dest;
  ulong uVar3;
  ulong local_98;
  size_t local_90;
  void *local_88;
  undefined1 auStack_80 [32];
  long *local_60 [4];
  ulong *local_40;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    lVar1 = FUN_002e2e80(PTR_FUN_04373078,0x30);
    if (lVar1 != 0) {
                    /* try { // try from 006da45c to 006da467 has its CatchHandler @ 006da584 */
      FUN_002e0ddc(lVar1,0);
    }
    *param_1 = lVar1;
  }
                    /* try { // try from 006da46c to 006da477 has its CatchHandler @ 006da59c */
  FUN_002deb18(auStack_80,0);
                    /* try { // try from 006da478 to 006da487 has its CatchHandler @ 006da588 */
  FUN_006da5cc(auStack_80,param_3,param_4);
  lVar1 = *param_1;
  local_98 = 0;
  local_90 = 0;
  local_88 = (void *)0x0;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 006da578 to 006da57f has its CatchHandler @ 006da580 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_98 = CONCAT71(local_98._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_98 | 1);
    if (__n == 0) goto LAB_006da500;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar3);
    local_98 = uVar3 | 1;
    local_90 = __n;
    local_88 = __dest;
  }
  memcpy(__dest,param_2,__n);
LAB_006da500:
  *(undefined1 *)((long)__dest + __n) = 0;
  local_40 = &local_98;
  uStack_38 = 0;
                    /* try { // try from 006da510 to 006da543 has its CatchHandler @ 006da5a0 */
  FUN_00634d1c(local_60,*(undefined8 *)(lVar1 + 0x20),&local_40);
  lVar2 = local_60[0][1];
  if (lVar2 == 0) {
    lVar2 = FUN_00634be0(lVar1 + 0x10,&local_98);
    *local_60[0] = lVar2;
    local_60[0][1] = lVar2;
  }
  FUN_002e03d4(lVar2 + 0x18,auStack_80);
  if ((local_98 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_88);
  }
  FUN_002ded3c(auStack_80);
  return;
}


