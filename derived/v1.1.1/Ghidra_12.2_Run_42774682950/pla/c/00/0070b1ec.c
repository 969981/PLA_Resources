/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0070b1ec; name: FUN_0070b1ec
 */


void FUN_0070b1ec(undefined8 param_1)

{
  byte local_80;
  undefined7 uStack_7f;
  undefined8 local_70;
  long *plStack_68;
  byte local_60;
  undefined7 uStack_5f;
  undefined8 local_50;
  long *plStack_48;
  
                    /* try { // try from 0070b1f8 to 0070b1ff has its CatchHandler @ 0070b278 */
  FUN_0070a7d0(&local_80);
                    /* try { // try from 0070b200 to 0070b20b has its CatchHandler @ 0070b274 */
  FUN_0070a7d0(param_1,&local_80);
  if ((local_60 & 1) != 0) {
    (**(code **)(*plStack_48 + 0x18))
              (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
  }
  if ((local_80 & 1) == 0) {
    return;
  }
  (**(code **)(*plStack_68 + 0x18))
            (plStack_68,local_70,CONCAT71(uStack_7f,local_80) & 0xfffffffffffffffe,1);
  return;
}


