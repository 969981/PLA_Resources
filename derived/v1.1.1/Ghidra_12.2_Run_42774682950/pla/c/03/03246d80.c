/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03246d80; name: _INIT_1072
 */


void _INIT_1072(void)

{
  if ((DAT_0443a480 & 1) == 0) {
    DAT_0443a478 = 0;
    DAT_0443a470 = FUN_03246de8;
    DAT_0443a468 = 1;
    DAT_0443a460 = &PTR_LAB_0434dae8;
    FUN_00100250(&LAB_032e1ebc,&DAT_0443a460,&PTR_LOOP_0411a000);
    DAT_0443a480 = 1;
  }
  return;
}


