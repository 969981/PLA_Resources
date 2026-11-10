/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fd7e4; name: FUN_003fd7e4
 */


void FUN_003fd7e4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_50 [32];
  
  FUN_002ef750(param_2 + 0x18);
                    /* try { // try from 003fd80c to 003fd817 has its CatchHandler @ 003fd864 */
  FUN_002f2c60(auStack_50,param_3);
                    /* try { // try from 003fd818 to 003fd83b has its CatchHandler @ 003fd868 */
  lVar1 = FUN_003fd2fc(param_2,auStack_50);
  if (lVar1 == 0) {
    *param_1 = 0;
  }
  else {
    (**(code **)(**(long **)(lVar1 + 0x20) + 0x10))(param_1);
  }
                    /* try { // try from 003fd844 to 003fd84b has its CatchHandler @ 003fd860 */
  FUN_002ef790(param_2 + 0x18);
  return;
}


