/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005331c0; name: FUN_005331c0
 */


void FUN_005331c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04185aa8;
                    /* try { // try from 005331d8 to 005331e3 has its CatchHandler @ 005331ec */
  FUN_003c9ce0(*(undefined8 *)(param_1[1] + 0x10),"ClientChannelControlHelper");
  return;
}


