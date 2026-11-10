/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010ef990; name: FUN_010ef990
 */


void FUN_010ef990(long param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar1 = (undefined1 *)*param_2;
  if (puVar1 != &DAT_cbf29ce484222645) {
    if (*(undefined1 **)(param_1 + 0x68) != puVar1) {
      if (*(undefined1 **)(param_1 + 0x78) == puVar1) {
        param_1 = param_1 + 0x10;
      }
      else if (*(undefined1 **)(param_1 + 0x88) == puVar1) {
        param_1 = param_1 + 0x20;
      }
      else if (*(undefined1 **)(param_1 + 0x98) == puVar1) {
        param_1 = param_1 + 0x30;
      }
      else if (*(undefined1 **)(param_1 + 0xa8) == puVar1) {
        param_1 = param_1 + 0x40;
      }
      else if (*(undefined1 **)(param_1 + 0xb8) == puVar1) {
        param_1 = param_1 + 0x50;
      }
      else if (*(undefined1 **)(param_1 + 200) == puVar1) {
        param_1 = param_1 + 0x60;
      }
      else if (*(undefined1 **)(param_1 + 0xd8) == puVar1) {
        param_1 = param_1 + 0x70;
      }
      else if (*(undefined1 **)(param_1 + 0xe8) == puVar1) {
        param_1 = param_1 + 0x80;
      }
      else if (*(undefined1 **)(param_1 + 0xf8) == puVar1) {
        param_1 = param_1 + 0x90;
      }
      else if (*(undefined1 **)(param_1 + 0x108) == puVar1) {
        param_1 = param_1 + 0xa0;
      }
      else if (*(undefined1 **)(param_1 + 0x118) == puVar1) {
        param_1 = param_1 + 0xb0;
      }
      else if (*(undefined1 **)(param_1 + 0x128) == puVar1) {
        param_1 = param_1 + 0xc0;
      }
      else if (*(undefined1 **)(param_1 + 0x138) == puVar1) {
        param_1 = param_1 + 0xd0;
      }
      else if (*(undefined1 **)(param_1 + 0x148) == puVar1) {
        param_1 = param_1 + 0xe0;
      }
      else if (*(undefined1 **)(param_1 + 0x158) == puVar1) {
        param_1 = param_1 + 0xf0;
      }
      else if (*(undefined1 **)(param_1 + 0x168) == puVar1) {
        param_1 = param_1 + 0x100;
      }
      else {
        if (*(undefined1 **)(param_1 + 0x68) == &DAT_cbf29ce484222645) {
          lVar3 = 0;
          puVar2 = (undefined8 *)(param_1 + 0x68);
        }
        else if (*(undefined1 **)(param_1 + 0x78) == &DAT_cbf29ce484222645) {
          puVar2 = (undefined8 *)(param_1 + 0x78);
          lVar3 = 1;
        }
        else if (*(undefined1 **)(param_1 + 0x88) == &DAT_cbf29ce484222645) {
          puVar2 = (undefined8 *)(param_1 + 0x88);
          lVar3 = 2;
        }
        else if (*(undefined1 **)(param_1 + 0x98) == &DAT_cbf29ce484222645) {
          puVar2 = (undefined8 *)(param_1 + 0x98);
          lVar3 = 3;
        }
        else if (*(undefined1 **)(param_1 + 0xa8) == &DAT_cbf29ce484222645) {
          puVar2 = (undefined8 *)(param_1 + 0xa8);
          lVar3 = 4;
        }
        else if (*(undefined1 **)(param_1 + 0xb8) == &DAT_cbf29ce484222645) {
          puVar2 = (undefined8 *)(param_1 + 0xb8);
          lVar3 = 5;
        }
        else if (*(undefined1 **)(param_1 + 200) == &DAT_cbf29ce484222645) {
          puVar2 = (undefined8 *)(param_1 + 200);
          lVar3 = 6;
        }
        else if (*(undefined1 **)(param_1 + 0xd8) == &DAT_cbf29ce484222645) {
          puVar2 = (undefined8 *)(param_1 + 0xd8);
          lVar3 = 7;
        }
        else if (*(undefined1 **)(param_1 + 0xe8) == &DAT_cbf29ce484222645) {
          puVar2 = (undefined8 *)(param_1 + 0xe8);
          lVar3 = 8;
        }
        else if (*(undefined1 **)(param_1 + 0xf8) == &DAT_cbf29ce484222645) {
          puVar2 = (undefined8 *)(param_1 + 0xf8);
          lVar3 = 9;
        }
        else if (*(undefined1 **)(param_1 + 0x108) == &DAT_cbf29ce484222645) {
          puVar2 = (undefined8 *)(param_1 + 0x108);
          lVar3 = 10;
        }
        else if (*(undefined1 **)(param_1 + 0x118) == &DAT_cbf29ce484222645) {
          puVar2 = (undefined8 *)(param_1 + 0x118);
          lVar3 = 0xb;
        }
        else if (*(undefined1 **)(param_1 + 0x128) == &DAT_cbf29ce484222645) {
          puVar2 = (undefined8 *)(param_1 + 0x128);
          lVar3 = 0xc;
        }
        else if (*(undefined1 **)(param_1 + 0x138) == &DAT_cbf29ce484222645) {
          puVar2 = (undefined8 *)(param_1 + 0x138);
          lVar3 = 0xd;
        }
        else if (*(undefined1 **)(param_1 + 0x148) == &DAT_cbf29ce484222645) {
          puVar2 = (undefined8 *)(param_1 + 0x148);
          lVar3 = 0xe;
        }
        else if (*(undefined1 **)(param_1 + 0x158) == &DAT_cbf29ce484222645) {
          puVar2 = (undefined8 *)(param_1 + 0x158);
          lVar3 = 0xf;
        }
        else {
          if (*(undefined1 **)(param_1 + 0x168) != &DAT_cbf29ce484222645) {
            return;
          }
          puVar2 = (undefined8 *)(param_1 + 0x168);
          lVar3 = 0x10;
        }
        *puVar2 = puVar1;
        param_1 = param_1 + lVar3 * 0x10;
      }
    }
    *(undefined4 *)(param_1 + 0x70) = param_3;
  }
  return;
}


