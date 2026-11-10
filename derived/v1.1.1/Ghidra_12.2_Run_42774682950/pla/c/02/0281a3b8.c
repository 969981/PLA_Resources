/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0281a3b8; name: FUN_0281a3b8
 */


void FUN_0281a3b8(long param_1,undefined4 param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long *local_48;
  undefined4 local_38;
  int local_34;
  
  if ((param_3 & 1) != 0) {
    FUN_02820ac4(param_1,0);
  }
  iVar4 = FUN_0282dbf0(*(undefined8 *)(param_1 + 0x8b0),param_2);
  *(undefined1 *)(param_1 + 0x9f4) = 0;
  FUN_0282ef20((float)iVar4,*(undefined8 *)(param_1 + 0x7f8));
  *(undefined1 *)(param_1 + 0x9f4) = 1;
  uVar5 = FUN_0282dc24(*(undefined8 *)(param_1 + 0x8b0),param_2,iVar4);
  FUN_02819878(param_1,uVar5,iVar4);
  puVar1 = (undefined8 *)**(long **)(param_1 + 0x838);
  puVar2 = (undefined8 *)(*(long **)(param_1 + 0x838))[1];
  if (puVar1 != puVar2) {
    cVar3 = *(char *)(puVar1 + 4);
    while( true ) {
      if (((cVar3 == '\0') && (iVar4 = *(int *)((long)puVar1 + 0x24), iVar4 != -1)) &&
         (pcVar6 = *(code **)(param_1 + 0x110), pcVar6 != (code *)0x0)) {
        local_60 = *puVar1;
        local_58 = puVar1[1];
        local_50 = puVar1[2];
        local_48 = (long *)puVar1[3];
        if (local_48 != (long *)0x0) {
          (**(code **)(*local_48 + 0x18))();
          pcVar6 = *(code **)(param_1 + 0x110);
        }
        local_38 = *(undefined4 *)(puVar1 + 5);
        local_34 = iVar4;
        (*pcVar6)(param_1 + 0x130,&local_34,&local_60,&local_38);
        if (local_48 != (long *)0x0) {
          (**(code **)(*local_48 + 0x20))();
        }
      }
      if (puVar2 == puVar1 + 6) break;
      cVar3 = *(char *)(puVar1 + 10);
      puVar1 = puVar1 + 6;
    }
  }
  return;
}


