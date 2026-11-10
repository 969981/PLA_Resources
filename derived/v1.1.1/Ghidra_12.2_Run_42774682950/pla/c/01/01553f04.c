/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01553f04; name: FUN_01553f04
 */


void FUN_01553f04(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  FUN_0159c1ec(*(undefined8 *)*param_1,&local_34,1);
  FUN_0159c1ec(*(undefined8 *)*param_1,&local_38,1);
  FUN_0159c1ec(*(undefined8 *)*param_1,&local_3c,1);
  FUN_0159c1ec(*(undefined8 *)*param_1,&local_40,1);
  param_2[1] = CONCAT44(local_40,local_3c);
  *param_2 = CONCAT44(local_38,local_34);
  return;
}


