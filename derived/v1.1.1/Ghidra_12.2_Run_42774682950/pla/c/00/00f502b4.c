/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f502b4; name: FUN_00f502b4
 */


undefined8 FUN_00f502b4(int *param_1,int *param_2)

{
  if ((((*param_1 == *param_2) && ((short)param_1[1] == (short)param_2[1])) &&
      (param_1[2] == param_2[2])) &&
     ((((char)param_1[3] == (char)param_2[3] &&
       (*(char *)((long)param_1 + 0xd) == *(char *)((long)param_2 + 0xd))) &&
      ((param_1[4] == param_2[4] && (param_1[5] == param_2[5])))))) {
    return 1;
  }
  return 0;
}


