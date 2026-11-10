/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f30068; name: FUN_02f30068
 */


undefined8 * FUN_02f30068(int param_1,ulong param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  
  if (param_1 == 2) {
    puVar2 = (undefined8 *)(*DAT_0442d138)(5,0xd0);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_LAB_042accf8;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = param_3;
      *(byte *)(puVar2 + 4) = *(byte *)(puVar2 + 4) & 0xf8;
      *(undefined4 *)((long)puVar2 + 0x3c) = 0;
      *(undefined4 *)(puVar2 + 0x10) = 0;
      *(undefined4 *)(puVar2 + 0xf) = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      puVar2[5] = &PTR_LAB_042acf10;
      puVar2[6] = &PTR_LAB_042acfc0;
      puVar2[0xb] = &PTR_LAB_042ad040;
      puVar2[0xc] = 0;
      *(undefined1 *)(puVar2 + 0x11) = 0xff;
      *(undefined1 *)(puVar2 + 0x12) = 0xff;
      *(undefined4 *)(puVar2 + 0x17) = 0xffffffff;
      puVar2[9] = 0;
      puVar2[10] = 0;
      puVar2[0x15] = 0;
      puVar2[0x16] = 0;
      puVar2[0x13] = 0;
      puVar2[0x14] = 0;
      puVar2[0x18] = 0;
      puVar2[0x19] = 0;
    }
  }
  else {
    if (param_1 != 0) {
      if (((uint)(param_2 >> 0x10) & 0xffff) == 2) {
        puVar2 = (undefined8 *)(*DAT_0442d138)(5,0xa0);
        if (puVar2 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        FUN_02f31d9c(puVar2,param_3);
        return puVar2;
      }
      if ((param_2 & 0xffff0000) != 0) {
        if ((DAT_0440a440 == 0) || (*DAT_0440a438 == (int)param_2)) {
          piVar5 = DAT_0440a438;
        }
        else {
          lVar4 = (ulong)DAT_0440a440 * 0x28;
          piVar6 = DAT_0440a438;
          do {
            lVar4 = lVar4 + -0x28;
            if (lVar4 == 0) goto LAB_02f301d8;
            piVar1 = piVar6 + 10;
            piVar5 = piVar6 + 10;
            piVar6 = piVar6 + 10;
          } while (*piVar1 != (int)param_2);
        }
        if (piVar5 != DAT_0440a438 + (ulong)DAT_0440a440 * 10) {
          if (param_1 == 1) {
            pcVar3 = *(code **)(piVar5 + 2);
          }
          else {
            pcVar3 = *(code **)(piVar5 + 4);
          }
          puVar2 = (undefined8 *)(*pcVar3)(param_3);
          return puVar2;
        }
      }
    }
LAB_02f301d8:
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}


