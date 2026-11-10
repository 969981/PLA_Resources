/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0035af74; name: FUN_0035af74
 */


void FUN_0035af74(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  long lVar4;
  size_t __n;
  ulong uVar5;
  void *__dest;
  long lVar6;
  ulong uVar7;
  void *local_58;
  undefined4 *local_50;
  undefined4 *local_48;
  
  local_58 = (void *)0x0;
  local_50 = (undefined4 *)0x0;
  local_48 = (undefined4 *)0x0;
                    /* try { // try from 0035afa4 to 0035afaf has its CatchHandler @ 0035b0bc */
  FUN_0034d074(param_3,&local_58);
  if (local_50 != local_48) {
    *local_50 = param_4;
    local_50 = local_50 + 1;
    goto LAB_0035b064;
  }
  lVar6 = (long)local_50 - (long)local_58 >> 2;
  uVar7 = lVar6 + 1;
  if (uVar7 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)((long)local_48 - (long)local_58 >> 2) < 0x1fffffffffffffff) {
    uVar5 = (long)local_48 - (long)local_58 >> 1;
    if (uVar7 <= uVar5) {
      uVar7 = uVar5;
    }
    if (uVar7 != 0) goto LAB_0035b00c;
    lVar4 = 0;
  }
  else {
    uVar7 = 0x3fffffffffffffff;
LAB_0035b00c:
    lVar4 = FUN_002e2e80(PTR_FUN_04373078,uVar7 << 2);
  }
  puVar1 = (undefined4 *)(lVar4 + lVar6 * 4);
  __n = (long)local_50 - (long)local_58;
  puVar2 = (undefined4 *)(lVar4 + uVar7 * 4);
  *puVar1 = param_4;
  __dest = (void *)((long)puVar1 - __n);
  if (0 < (long)__n) {
    memcpy(__dest,local_58,__n);
  }
  bVar3 = local_58 != (void *)0x0;
  local_58 = __dest;
  local_50 = puVar1 + 1;
  local_48 = puVar2;
  if (bVar3) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
LAB_0035b064:
                    /* try { // try from 0035b068 to 0035b0bb has its CatchHandler @ 0035b0bc */
  FUN_0036e360(param_1,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 8),param_2,param_3,
               &local_58,param_5);
  if (local_58 != (void *)0x0) {
    local_50 = local_58;
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  return;
}


