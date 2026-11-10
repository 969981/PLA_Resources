/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031b7e0; name: FUN_0031b7e0
 */


int FUN_0031b7e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  ulong uVar2;
  byte local_60 [16];
  undefined8 local_50;
  int local_48;
  
  iVar1 = FUN_0031b600();
  uVar2 = FUN_0031b148(param_6,param_5,param_4);
  if ((uVar2 & 1) != 0) {
    local_48 = 0;
    FUN_0031a934(local_60,param_4);
                    /* try { // try from 0031b83c to 0031b853 has its CatchHandler @ 0031ba0c */
    FUN_0031a934(param_4,param_5);
    FUN_0031a934(param_5,local_60);
    if ((local_48 == 9) && ((local_60[0] & 1) != 0)) {
      FUN_002e2ea0(PTR_LAB_04373088,local_50);
    }
    uVar2 = FUN_0031b148(param_6,param_4,param_3);
    if ((uVar2 & 1) == 0) {
      iVar1 = iVar1 + 1;
    }
    else {
      local_48 = 0;
      FUN_0031a934(local_60,param_3);
                    /* try { // try from 0031b89c to 0031b8b3 has its CatchHandler @ 0031b9f8 */
      FUN_0031a934(param_3,param_4);
      FUN_0031a934(param_4,local_60);
      if ((local_48 == 9) && ((local_60[0] & 1) != 0)) {
        FUN_002e2ea0(PTR_LAB_04373088,local_50);
      }
      uVar2 = FUN_0031b148(param_6,param_3,param_2);
      if ((uVar2 & 1) == 0) {
        iVar1 = iVar1 + 2;
      }
      else {
        local_48 = 0;
        FUN_0031a934(local_60,param_2);
                    /* try { // try from 0031b8fc to 0031b913 has its CatchHandler @ 0031b9e4 */
        FUN_0031a934(param_2,param_3);
        FUN_0031a934(param_3,local_60);
        if ((local_48 == 9) && ((local_60[0] & 1) != 0)) {
          FUN_002e2ea0(PTR_LAB_04373088,local_50);
        }
        uVar2 = FUN_0031b148(param_6,param_2,param_1);
        if ((uVar2 & 1) == 0) {
          iVar1 = iVar1 + 3;
        }
        else {
          local_48 = 0;
          FUN_0031a934(local_60,param_1);
                    /* try { // try from 0031b95c to 0031b973 has its CatchHandler @ 0031b9d0 */
          FUN_0031a934(param_1,param_2);
          FUN_0031a934(param_2,local_60);
          if ((local_48 == 9) && ((local_60[0] & 1) != 0)) {
            FUN_002e2ea0(PTR_LAB_04373088,local_50);
          }
          iVar1 = iVar1 + 4;
        }
      }
    }
  }
  return iVar1;
}


