/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0033b810; name: FUN_0033b810
 */


void FUN_0033b810(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 **ppuStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  param_1[2] = 0;
  puStack_50 = auStack_a0;
  ppuStack_58 = &local_60;
  *param_1 = 0;
  param_1[1] = 0;
  uStack_48 = 0xffffff80ffffffc8;
                    /* try { // try from 0033b878 to 0033b887 has its CatchHandler @ 0033b898 */
  local_98 = param_3;
  uStack_90 = param_4;
  local_88 = param_5;
  uStack_80 = param_6;
  local_78 = param_7;
  uStack_70 = param_8;
  local_68 = param_9;
  local_60 = (undefined1 *)register0x00000008;
  FUN_0033b720(param_1,param_2,&local_60);
  return;
}


