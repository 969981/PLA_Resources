/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0051ebb0; name: FUN_0051ebb0
 */


void FUN_0051ebb0(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong *puVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  if ((*param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("!GetIsAllocated()",
                  "external/com_google_absl\\absl/container/internal/inlined_vector.h",0x1da,
                  "Initialize");
  }
  if (1 < *param_1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("GetSize() == 0",
                  "external/com_google_absl\\absl/container/internal/inlined_vector.h",0x1db,
                  "Initialize");
  }
  if (param_3 < 3) {
    puVar2 = param_1 + 1;
  }
  else {
    uVar1 = param_3;
    if (param_3 < 5) {
      uVar1 = 4;
    }
    puVar2 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,uVar1 * 0x18);
    param_1[1] = (ulong)puVar2;
    param_1[2] = uVar1;
    *param_1 = *param_1 | 1;
  }
  FUN_0051ec90(param_1,puVar2,&local_28,param_3);
  *param_1 = *param_1 + param_3 * 2;
  return;
}


