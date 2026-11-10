/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006db0e0; name: FUN_006db0e0
 */


void FUN_006db0e0(long *param_1,long *param_2,char *param_3)

{
  size_t __n;
  undefined *puVar1;
  void *__dest;
  ulong uVar2;
  long lVar3;
  ulong local_78;
  size_t local_70;
  void *local_68;
  long local_60 [4];
  ulong *local_38;
  
  lVar3 = *param_2;
  if (lVar3 == 0) goto LAB_006db1d0;
  local_78 = 0;
  local_70 = 0;
  local_68 = (void *)0x0;
  __n = strlen(param_3);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 006db230 to 006db237 has its CatchHandler @ 006db238 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_78 = CONCAT71(local_78._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_78 | 1);
    if (__n != 0) goto LAB_006db168;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar2);
    local_78 = uVar2 | 1;
    local_70 = __n;
    local_68 = __dest;
LAB_006db168:
    memcpy(__dest,param_3,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
  local_38 = &local_78;
                    /* try { // try from 006db188 to 006db197 has its CatchHandler @ 006db244 */
  FUN_006342a8(local_60,*(undefined8 *)(lVar3 + 0x20),&local_38,0);
  if ((local_78 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_68);
  }
  if (local_60[0] != 0) {
    if (*(int *)(*(long *)(local_60[0] + 8) + 0x34) == 10) {
      puVar1 = *(undefined **)(*(long *)(local_60[0] + 8) + 0x28);
    }
    else {
      puVar1 = PTR_DAT_04373798;
    }
    *param_1 = 0;
    lVar3 = FUN_002e2e80(PTR_FUN_04373078,0x30);
    if (lVar3 != 0) {
                    /* try { // try from 006db1fc to 006db207 has its CatchHandler @ 006db23c */
      FUN_002e0ddc(lVar3,0);
    }
    *param_1 = lVar3;
                    /* try { // try from 006db20c to 006db217 has its CatchHandler @ 006db240 */
    FUN_002e1668(lVar3,puVar1);
    return;
  }
LAB_006db1d0:
  *param_1 = 0;
  return;
}


