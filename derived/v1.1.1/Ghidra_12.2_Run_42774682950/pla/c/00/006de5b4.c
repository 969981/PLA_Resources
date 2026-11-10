/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006de5b4; name: FUN_006de5b4
 */


void FUN_006de5b4(long param_1)

{
  byte local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  long *plStack_38;
  byte local_30;
  undefined7 uStack_2f;
  undefined8 local_20;
  long *plStack_18;
  
  if (*(char *)(param_1 + 0x159) != '\0') {
    FUN_006de0c0(&local_50,param_1,&DAT_03996322);
    if ((local_30 & 1) != 0) {
      (**(code **)(*plStack_18 + 0x18))
                (plStack_18,local_20,CONCAT71(uStack_2f,local_30) & 0xfffffffffffffffe,1);
    }
    if ((local_50 & 1) != 0) {
      (**(code **)(*plStack_38 + 0x18))
                (plStack_38,local_40,CONCAT71(uStack_4f,local_50) & 0xfffffffffffffffe,1);
    }
  }
  return;
}


