/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0281a2d0; name: FUN_0281a2d0
 */


void FUN_0281a2d0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  code *pcVar5;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long *local_48;
  undefined4 local_38;
  int local_34;
  
  puVar1 = (undefined8 *)**(long **)(param_1 + 0x838);
  puVar2 = (undefined8 *)(*(long **)(param_1 + 0x838))[1];
  if (puVar1 != puVar2) {
    cVar4 = *(char *)(puVar1 + 4);
    while( true ) {
      if (((cVar4 == '\0') && (iVar3 = *(int *)((long)puVar1 + 0x24), iVar3 != -1)) &&
         (pcVar5 = *(code **)(param_1 + 0x110), pcVar5 != (code *)0x0)) {
        local_60 = *puVar1;
        local_58 = puVar1[1];
        local_50 = puVar1[2];
        local_48 = (long *)puVar1[3];
        if (local_48 != (long *)0x0) {
          (**(code **)(*local_48 + 0x18))();
          pcVar5 = *(code **)(param_1 + 0x110);
        }
        local_38 = *(undefined4 *)(puVar1 + 5);
        local_34 = iVar3;
        (*pcVar5)(param_1 + 0x130,&local_34,&local_60,&local_38);
        if (local_48 != (long *)0x0) {
          (**(code **)(*local_48 + 0x20))();
        }
      }
      if (puVar2 == puVar1 + 6) break;
      cVar4 = *(char *)(puVar1 + 10);
      puVar1 = puVar1 + 6;
    }
  }
  return;
}


