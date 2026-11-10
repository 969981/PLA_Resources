/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031b380; name: FUN_0031b380
 */


undefined8 FUN_0031b380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  byte local_50 [16];
  undefined8 local_40;
  int local_38;
  
  uVar1 = FUN_0031b148(param_4,param_2,param_1);
  uVar2 = FUN_0031b148(param_4,param_3,param_2);
  if ((uVar1 & 1) == 0) {
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    local_38 = 0;
    FUN_0031a934(local_50,param_2);
                    /* try { // try from 0031b42c to 0031b443 has its CatchHandler @ 0031b5b8 */
    FUN_0031a934(param_2,param_3);
    FUN_0031a934(param_3,local_50);
    if ((local_38 == 9) && ((local_50[0] & 1) != 0)) {
      FUN_002e2ea0(PTR_LAB_04373088,local_40);
    }
    uVar1 = FUN_0031b148(param_4,param_2,param_1);
    if ((uVar1 & 1) != 0) {
      local_38 = 0;
      FUN_0031a934(local_50,param_1);
                    /* try { // try from 0031b48c to 0031b4a3 has its CatchHandler @ 0031b590 */
      FUN_0031a934(param_1,param_2);
      FUN_0031a934(param_2,local_50);
LAB_0031b530:
      if ((local_38 == 9) && ((local_50[0] & 1) != 0)) {
        FUN_002e2ea0(PTR_LAB_04373088,local_40);
      }
      return 2;
    }
  }
  else if ((uVar2 & 1) == 0) {
    local_38 = 0;
    FUN_0031a934(local_50,param_1);
                    /* try { // try from 0031b4b8 to 0031b4cf has its CatchHandler @ 0031b5a4 */
    FUN_0031a934(param_1,param_2);
    FUN_0031a934(param_2,local_50);
    if ((local_38 == 9) && ((local_50[0] & 1) != 0)) {
      FUN_002e2ea0(PTR_LAB_04373088,local_40);
    }
    uVar1 = FUN_0031b148(param_4,param_3,param_2);
    if ((uVar1 & 1) != 0) {
      local_38 = 0;
      FUN_0031a934(local_50,param_2);
                    /* try { // try from 0031b518 to 0031b52f has its CatchHandler @ 0031b57c */
      FUN_0031a934(param_2,param_3);
      FUN_0031a934(param_3,local_50);
      goto LAB_0031b530;
    }
  }
  else {
    local_38 = 0;
    FUN_0031a934(local_50,param_1);
                    /* try { // try from 0031b3d8 to 0031b3ef has its CatchHandler @ 0031b5cc */
    FUN_0031a934(param_1,param_3);
    FUN_0031a934(param_3,local_50);
    if ((local_38 == 9) && ((local_50[0] & 1) != 0)) {
      FUN_002e2ea0(PTR_LAB_04373088,local_40);
    }
  }
  return 1;
}


