/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030c7324; name: FUN_030c7324
 */


void FUN_030c7324(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  byte bVar1;
  undefined *puVar2;
  char *pcVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    param_4 = 0;
    pcVar3 = "FullStep";
  }
  else {
    if (*(char *)(param_1 + 0x10) != '\0') {
      puVar2 = &DAT_0396f2b6;
LAB_030c73cc:
      FUN_032c53d8(param_2,&DAT_038bd9bd,puVar2,param_4);
      return;
    }
    param_4 = 0;
    bVar1 = *(byte *)(param_1 + 0x11);
    lVar4 = **(long **)(*(long *)(*(long *)**(undefined8 **)(param_1 + 8) + 0x4c0) +
                        (ulong)bVar1 * 8 + 0x78) + (ulong)*(ushort *)(param_1 + 0x12) * 0x20;
    do {
      param_4 = (ulong)(uint)(*(int *)(lVar4 + 0xc) + (int)param_4);
      lVar4 = *(long *)(lVar4 + 0x10);
    } while (lVar4 != 0);
    if (bVar1 != 2) {
      if (bVar1 == 1) {
        puVar2 = &DAT_0395b54d;
      }
      else {
        if (bVar1 != 0) {
          puVar2 = &DAT_03978235;
          goto LAB_030c73cc;
        }
        puVar2 = &DAT_0389eaad;
      }
      FUN_032c53d8(param_2,"%s %i\\n%d:%d",puVar2,param_4,*(undefined1 *)(param_1 + 0x14),
                   *(undefined1 *)(param_1 + 0x15));
      return;
    }
    pcVar3 = "FC";
  }
  FUN_032c53d8(param_2,"%s %i\\n%d",pcVar3,param_4,*(undefined1 *)(param_1 + 0x14));
  return;
}


