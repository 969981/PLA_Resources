/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005da580; name: FUN_005da580
 */


void FUN_005da580(void)

{
  undefined8 *puVar1;
  undefined8 *local_18;
  
  local_18 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,8);
  if (local_18 != (undefined8 *)0x0) {
    *local_18 = &PTR_FUN_0418dc80;
  }
                    /* try { // try from 005da5ac to 005da5b7 has its CatchHandler @ 005da5f0 */
  FUN_00542858(1,&local_18);
  puVar1 = local_18;
  local_18 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_002e2ea0(PTR_LAB_04373088,puVar1);
  }
  return;
}


