/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003a1cc0; name: FUN_003a1cc0
 */


bool FUN_003a1cc0(long *param_1,long *param_2,long *param_3)

{
  size_t sVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  size_t __n;
  long lVar5;
  ulong *puVar6;
  byte *__s1;
  byte *pbVar7;
  long local_50;
  undefined *puStack_48;
  undefined **local_40;
  undefined1 *puStack_38;
  undefined ***local_28;
  
  lVar4 = (**(code **)(*param_1 + 0x98))();
  pbVar7 = *(byte **)(lVar4 + 8);
  __n = strlen(PTR_s_google_protobuf_Any_04373c70);
  bVar2 = *pbVar7;
  sVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    sVar1 = *(size_t *)(pbVar7 + 8);
  }
  if (__n == sVar1) {
    if (__n != 0) {
      if (__n == 0xffffffffffffffff) {
                    /* try { // try from 003a1e2c to 003a1e33 has its CatchHandler @ 003a1e34 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      __s1 = *(byte **)(pbVar7 + 0x10);
      if ((bVar2 & 1) == 0) {
        __s1 = pbVar7 + 1;
      }
      iVar3 = memcmp(__s1,PTR_s_google_protobuf_Any_04373c70,__n);
      if (iVar3 != 0) {
        return false;
      }
    }
    lVar5 = FUN_00342e08(lVar4,1);
    *param_2 = lVar5;
    lVar4 = FUN_00342e08(lVar4,2);
    *param_3 = lVar4;
    lVar4 = *param_2;
    if (lVar4 != 0) {
      puVar6 = *(ulong **)(lVar4 + 0x30);
      if ((puVar6 != (ulong *)0x0) && (puStack_48 = PTR_LAB_04373a98, *puVar6 != 0xffffffffffffffff)
         ) {
        local_40 = &puStack_48;
        local_28 = &local_40;
        local_50 = lVar4;
        puStack_38 = (undefined1 *)&local_50;
        std::__call_once(puVar6,&local_28,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
      if ((*(int *)(lVar4 + 0x38) == 9) && (lVar4 = *param_3, lVar4 != 0)) {
        puVar6 = *(ulong **)(lVar4 + 0x30);
        if ((puVar6 != (ulong *)0x0) &&
           (puStack_48 = PTR_LAB_04373a98, *puVar6 != 0xffffffffffffffff)) {
          local_40 = &puStack_48;
          local_28 = &local_40;
          local_50 = lVar4;
          puStack_38 = (undefined1 *)&local_50;
          std::__call_once(puVar6,&local_28,(_func_void_void_ptr *)PTR_LAB_04373aa0);
        }
        return *(int *)(lVar4 + 0x38) == 0xc;
      }
    }
  }
  return false;
}


