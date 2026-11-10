/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00166790; name: FUN_00166790
 */


void FUN_00166790(long param_1,long *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  
  lVar4 = *param_2;
  pcVar3 = "no visible label \'%s\' for <goto> at line %d";
  if ((*(char *)(lVar4 + 8) == '\x04') &&
     (pcVar3 = "no visible label \'%s\' for <goto> at line %d", *(char *)(lVar4 + 10) != '\0')) {
    pcVar3 = "<%s> at line %d not inside a loop";
  }
  uVar2 = FUN_00162fa0(*(undefined8 *)(param_1 + 0x38),pcVar3,lVar4 + 0x18,
                       *(undefined4 *)((long)param_2 + 0xc));
  FUN_00166910(param_1,uVar2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x1667ec);
  (*pcVar1)();
}


