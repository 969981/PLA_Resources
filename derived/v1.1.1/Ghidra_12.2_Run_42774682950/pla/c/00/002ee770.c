/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ee770; name: FUN_002ee770
 */


void FUN_002ee770(char *param_1)

{
  undefined8 uVar1;
  undefined *local_20 [2];
  
  std::logic_error::logic_error((logic_error *)local_20,param_1);
  local_20[0] = PTR_vtable_04373848 + 0x10;
                    /* try { // try from 002ee794 to 002ee79b has its CatchHandler @ 002ee79c */
  uVar1 = FUN_002ee730(local_20);
                    /* catch() { ... } // from try @ 002ee794 with catch @ 002ee79c */
  std::out_of_range::~out_of_range((out_of_range *)local_20);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(uVar1);
}


