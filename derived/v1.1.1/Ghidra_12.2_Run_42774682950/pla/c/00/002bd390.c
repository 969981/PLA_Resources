/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002bd390; name: FUN_002bd390
 */


void FUN_002bd390(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  param_1[3] = param_2;
  lVar1 = *(long *)(param_3 + 0x20);
  if (lVar1 == 0) {
    param_1[8] = 0;
  }
  else if (param_3 == lVar1) {
    param_1[8] = param_1 + 4;
                    /* try { // try from 002bd3e4 to 002bd3eb has its CatchHandler @ 002bd440 */
    (**(code **)(**(long **)(param_3 + 0x20) + 0x18))(*(long **)(param_3 + 0x20),param_1 + 4);
  }
  else {
    param_1[8] = lVar1;
    *(undefined8 *)(param_3 + 0x20) = 0;
  }
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_4;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
                    /* try { // try from 002bd418 to 002bd41f has its CatchHandler @ 002bd444 */
  (**(code **)(**(long **)PTR_DAT_04373140 + 0x118))(*(long **)PTR_DAT_04373140,param_2);
  *param_1 = PTR_LAB_04373510;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}


