/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053b188; name: FUN_0053b188
 */


long FUN_0053b188(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *local_28;
  
  lVar2 = FUN_002e2e80(PTR_FUN_04373078,0x1c8);
  if (lVar2 != 0) {
    local_28 = (undefined8 *)*param_2;
    uVar3 = *param_1;
    *param_2 = 0;
                    /* try { // try from 0053b1cc to 0053b1d7 has its CatchHandler @ 0053b208 */
    FUN_00536cec(lVar2,uVar3,&local_28,*param_3);
    puVar1 = local_28;
    local_28 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 0053b1ec to 0053b1ef has its CatchHandler @ 0053b204 */
      (**(code **)*puVar1)();
    }
  }
  return lVar2;
}


