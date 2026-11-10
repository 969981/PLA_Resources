/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086dad0; name: _INIT_127
 */


void _INIT_127(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_DAT_04378110;
  DAT_043a5878 = PTR_DAT_04378110 + 0x68;
  DAT_043a5858 = PTR_DAT_04378110 + 0x10;
  DAT_043a5860 = &DAT_043a5880;
  DAT_043a5868._0_4_ = 0x200;
  lVar3 = 0;
  do {
    lVar1 = lVar3 + 3;
    *(undefined2 *)((long)&DAT_043a5880 + lVar3) = 0;
    (&DAT_043a5882)[lVar3] = 0;
    lVar3 = lVar1;
  } while (lVar1 != 0x201);
  DAT_043a5868._4_4_ = 0;
  DAT_043a5870 = 0;
  FUN_00100250(PTR_LAB_043783d0,&DAT_043a5858,&PTR_LOOP_0411a000);
  DAT_043a5a88 = puVar2 + 0x10;
  DAT_043a5aa8 = puVar2 + 0x68;
  DAT_043a5a90 = &DAT_043a5ab0;
  DAT_043a5a98._0_4_ = 0x200;
  lVar3 = 0;
  do {
    lVar1 = lVar3 + 3;
    *(undefined2 *)((long)&DAT_043a5ab0 + lVar3) = 0;
    (&DAT_043a5ab2)[lVar3] = 0;
    lVar3 = lVar1;
  } while (lVar1 != 0x201);
  DAT_043a5a98._4_4_ = 0;
  DAT_043a5aa0 = 0;
  FUN_00100250(PTR_LAB_043783d0,&DAT_043a5a88,&PTR_LOOP_0411a000);
  return;
}


