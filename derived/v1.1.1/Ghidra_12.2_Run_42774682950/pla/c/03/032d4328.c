/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d4328; name: FUN_032d4328
 */


void FUN_032d4328(undefined8 *param_1,long *param_2)

{
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [64];
  
  if (param_2 == (long *)0x0) {
    param_2 = (long *)FUN_032d49a4();
  }
  FUN_03325668(auStack_60,param_1 + 0xc,*param_1,1,0);
  FUN_0332425c(auStack_70,auStack_60);
  (**(code **)(*param_2 + 0x50))(param_2,auStack_70);
  FUN_03324278(auStack_70);
  FUN_033256cc(auStack_60);
  return;
}


