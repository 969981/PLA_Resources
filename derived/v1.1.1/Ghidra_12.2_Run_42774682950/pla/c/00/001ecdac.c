/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ecdac; name: FUN_001ecdac
 */


void FUN_001ecdac(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  char *pcVar4;
  char *__s;
  ulong uVar5;
  undefined8 local_58;
  
  uVar5 = *(ulong *)(param_3 + 0xf40);
  puVar2 = &DAT_038a006b;
  if ((uVar5 & 0x840) != 0) {
    puVar2 = &DAT_0396725e;
  }
  local_58 = param_2;
  if (param_1 != (undefined8 *)0x0) {
    do {
      __s = (char *)*param_1;
      pcVar4 = strchr(__s,0x3a);
      if ((pcVar4 == (char *)0x0) || (pcVar4[1] != ' ')) {
        FUN_001f3934(param_3,"Malformatted trailing header ! Skipping trailer.");
      }
      else {
        iVar3 = FUN_001ecb14(&local_58,&DAT_039a01e3,__s,puVar2);
        if (iVar3 != 0) {
          return;
        }
      }
      param_1 = (undefined8 *)param_1[1];
    } while (param_1 != (undefined8 *)0x0);
  }
  uVar1 = 1;
  if ((uVar5 & 0x840) == 0) {
    uVar1 = 2;
  }
  FUN_001ecbe4(&local_58,puVar2,uVar1);
  return;
}


